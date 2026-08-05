class Solution {
public:
    void dfs(int u, vector<vector<int>>& adj, vector<int>& vis) {
        vis[u] = 1;
        for (int v : adj[u]) {
            if (vis[v] == 0) {
                dfs(v, adj, vis);
            }
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        
        vector<vector<int>> adj(n);
        for (const auto& edge : invocations) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
        }

        // vis will track our "suspicious" methods
        vector<int> vis(n, 0);
        dfs(k, adj, vis);

       
        bool canRemove = true;
        for (const auto& edge : invocations) {
            int u = edge[0];
            int v = edge[1];
            
            if (vis[u] == 0 && vis[v] == 1) {
                canRemove = false;
                break;
            }
        }

        vector<int> ans;
        
        // Step 2: Build the answer based on whether we can remove them
        if (canRemove == false) {
            
            for (int i = 0; i < n; i++) {
                ans.push_back(i);
            }
        } else {
           
            for (int i = 0; i < n; i++) {
                if (vis[i] == 0) {
                    ans.push_back(i);
                }
            }
        }

        return ans;
    }
};