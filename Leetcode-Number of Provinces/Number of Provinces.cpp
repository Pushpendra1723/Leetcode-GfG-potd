class Solution {
public:

    void dfs(int node,vector<vector<int>>&isConnected,vector<int>&vis)
    {
        vis[node]=1;
        for(int i=0;i<isConnected.size();i++)
        {
            if(isConnected[node][i]==1&&vis[i]==0)
            {
                dfs(i,isConnected,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int cnt=0;
        int n=isConnected.size();
        vector<int>vis(n+1,0);
        for(int i=0;i<n;i++)
        {
          if(vis[i]==0)
          {
              cnt++;
              dfs(i,isConnected,vis);
          }
        }
        return cnt;
    }
};