class Solution {
public:

    int helper(int r,int c,int m,int n,vector<vector<int>>&vis,int dx[],int dy[],vector<vector<int>>&dp)
    {
        if(vis[r][c]==1)return 0;
        if(dp[r][c]!=-1)return dp[r][c];
        vis[r][c]=1;
        
        
        int ans=0;
        for(int i=0;i<2;i++)
        {
            int nr=r+dx[i];
            int nc=c+dy[i];
            if(nr<m&&nc<n&&vis[nr][nc]!=1)
            {
                ans+=helper(nr,nc,m,n,vis,dx,dy,dp);
            }
        }
        vis[r][c]=0;//---------------Backtracking----------------------
        return dp[r][c]=ans;
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>vis(m,vector<int>(n,0));
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int dx[2]={0,1};
        int dy[2]={1,0};
        dp[m-1][n-1]=1;
        return helper(0,0,m,n,vis,dx,dy,dp);
    }
};

