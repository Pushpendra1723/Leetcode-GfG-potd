// ----------------TLE Approach---------------------

    void dfs(int n,vector<int>&vis,vector<int>adj[])
    {
        if(vis[n]==1)return ;
        vis[n]=1;
        for(auto it:adj[n])
        {
        
                dfs(it,vis,adj);
            
        }
        return ;
        
    }
	int findMotherVertex(int n, vector<int>adj[])
	{
	    // Code here
	    vector<int>vis(n,-1);
	    vector<int>check(n,1);
	    for(int i=0;i<n;i++)
	    {
	        dfs(i,vis,adj);
	        if(vis==check)return i;
	        for(int i=0;i<n;i++)vis[i]=-1;
	    }
	    return -1;
	}