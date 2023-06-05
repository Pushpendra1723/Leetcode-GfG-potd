class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
	void preorder(Node *root,vector<int>&ans)
	{
	    if(root!=0)
	    {
	    ans.push_back(root->data);
	    preorder(root->left,ans);
	    preorder(root->right,ans);
	    }
	    else return;
	}
    int minDiff(Node *root, int k)
    {
        //Your code here
        vector<int>ans;
        preorder(root,ans);
    
        int minn=INT_MAX;
        for(int i=0;i<ans.size();i++)
        {
            if(abs(k-ans[i])<minn)
            {
                minn=abs(k-ans[i]);
                
            }
        }
        return minn;
    }
};