class Solution {
public:
    vector<vector<int>> result;
    vector<int> disc, low;
    int time = 0;

    void dfs(int u, int parent, vector<vector<int>>& adj) {
        disc[u] = low[u] = ++time; 
        
        for (int v : adj[u]) {
            if (v == parent) continue; 
            
            if (disc[v] == 0) { 
                dfs(v, u, adj);  
                low[u] = min(low[u], low[v]);  
                
                if (low[v] > disc[u]) 
                    result.push_back({u, v});  
            } 
            else {
                low[u] = min(low[u], disc[v]);  
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n);
        for (auto& edge : connections) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        disc.assign(n, 0);
        low.assign(n, 0);
        
        dfs(0, -1, adj); 
        
        return result;
    }
};


