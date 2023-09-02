public:
    int getCount(Node *root, int k)
    {
        //code hereint
        queue<Node *>q;
        q.push(root);
        vector<int>lv;
        int level=0;
        while(!q.empty())
        {
           int size=q.size();
           level++;
           for(int i=0;i<size;i++)
           {
               Node *temp=q.front();
               q.pop();
               if(temp->left==0&&temp->right==0)
               {
                   lv.push_back(level);
               }
               if(temp->left!=0)q.push(temp->left);
               if(temp->right!=0)q.push(temp->right);
           }
        }
        
        int cnt=0;
        
        for(int i=0;i<lv.size();i++)
        {
            if(k>=lv[i])
            {
                cnt++;
                k=k-lv[i];
            }
            else break;
        }
        return cnt;
    }
};