//-------------------------WRONG---------------------------------
   bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
    queue<Node *>q;
    q.push(root1);
    vector<int>v1;
    while(!q.empty())
    {
        int size=q.size();
        vector<int>level;
        for(int i=0;i<size;i++)
        {
            Node *temp=q.front();
            q.pop();
            if(temp->left!=0)q.push(temp->left);
            if(temp->right!=0)q.push(temp->right);
            level.push_back(temp->data);
        }
        for(auto it:level)
        {
            v1.push_back(it);
        }
    }
    
    vector<int>v2;
    q.push(root2);
    
    while(!q.empty())
    {
        int size=q.size();
        vector<int>level;
        for(int i=0;i<size;i++)
        {
            Node *temp=q.front();
            q.pop();
            if(temp->left!=0)q.push(temp->left);
            if(temp->right!=0)q.push(temp->right);
            level.push_back(temp->data);
        }
        reverse(level.begin(),level.end());
        for(auto it:level)
        {
            v2.push_back(it);
        }
    }
    
    if(v1==v2)return true;
    return false;
    }