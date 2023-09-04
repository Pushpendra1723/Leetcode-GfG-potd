    void dfs(int r,int c,int n,int m,vector<vector<char>>& mat,int dx[],int dy[])
    {
        mat[r][c]='P';
        for(int k=0;k<4;k++)
        {
            int nr=r+dx[k];
            int nc=c+dy[k];
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&mat[nr][nc]=='O')
            {
                dfs(nr,nc,n,m,mat,dx,dy);
            }
        }
        return ;
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        for(int j=0;j<m;j++)
        {
            if(mat[0][j]=='O')dfs(0,j,n,m,mat,dx,dy);
            if(mat[n-1][j]=='O')dfs(n-1,j,n,m,mat,dx,dy);
        }
        
        for(int i=0;i<n;i++)
        {
            if(mat[i][0]=='O')dfs(i,0,n,m,mat,dx,dy);
            if(mat[i][m-1]=='O')dfs(i,m-1,n,m,mat,dx,dy);
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]=='O')mat[i][j]='X';
            }
        }
        
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]=='P')mat[i][j]='O';
            }
        }
        return mat;
        
    }