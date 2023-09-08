class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    
    void inorder(Node *root,vector<int>&v)
    {
        if(root!=0)
        {
            inorder(root->left,v);
            v.push_back(root->data);
            inorder(root->right,v);
        }
        return ;
    }
    
    
    void inorder_a(Node *root,vector<int>&v,int & i)
    {
        
        if(!root)return;
            inorder_a(root->left,v,i);
            root->data=v[i++];
            
            inorder_a(root->right,v,i);

    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
       vector<int>v;
       inorder(root,v);
       
       sort(v.begin(),v.end());
       
       int i=0;
       inorder_a(root,v,i);
       
       return root;
    }
};