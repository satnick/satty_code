class Solution {
    
   
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
         vector<bool> visited(adj.size(), false);
         
         vector<int>res;
         
         dfsHelper(adj, 0, visited, res);
         
         return res;
        
        
    }
    
    void dfsHelper(vector<vector<int>>& adj, int u, vector<bool>& visited, vector<int> &res)
    {
        visited[u] = true;
        res.push_back(u);
        
        for(auto v : adj[u])
        {
            if(visited[v] ==false)
            {
                dfsHelper(adj, v, visited, res);
            }
        }
        
        
    }
};