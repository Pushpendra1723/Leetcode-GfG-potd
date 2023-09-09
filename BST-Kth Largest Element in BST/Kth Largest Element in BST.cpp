class Solution
{
    public:
    void inorder(Node *root,vector<int>&v)
    {
        if(root!=0)
        {
            inorder(root->left,v);
            v.push_back(root->data);
            inorder(root->right,v);
        }
        return;
    }
    int kthLargest(Node *root, int K)
    {
        //Your code herevcet
        vector<int>v;
        inorder(root,v);
        int n=v.size();
        return v[n-K];
    }
};