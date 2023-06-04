	void dfs(int node,vector<int>adj[],vector<int>&vis,stack<int>&s)
	{
	    vis[node]=1;
	    
	    for(auto it:adj[node])
	    {
	        if(!vis[it])
	        {
	            dfs(it,adj,vis,s);
	        }
	    }
	    s.push(node);
	}

	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	   // int vis[V]={0};
	   vector<int>vis(V,0);
	    stack<int>s;
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            dfs(i,adj,vis,s);
	        }
	    }
	    vector<int>ans;
	    while(s.size()!=0)
	    {
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}