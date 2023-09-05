    vector<vector<int>> printGraph(int n, vector<pair<int,int>>ed) {
        // Code here
        vector<vector<int>>adj(n);
        
        for(auto it:ed)
        {
           int u=it.first;
           int v=it.second;
           
           adj[u].push_back(v);
           adj[v].push_back(u);
        }
        
       return adj;
        
        
    }