class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        
        queue<int> q;
        vector<bool> visited(adj.size(), false);
        vector<int>res;
    
        q.push(0);
        visited[0] = true;
        
        while(q.size() > 0)
        {
            int v = q.front();
            
            q.pop();
            res.push_back(v);
   
            for(auto el : adj[v])
            {
                if(visited[el] == false)
                {
                    visited[el] = true;
                    q.push(el);
                    
                }
            }
        }
        
        return res;
    }
};