class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>g(n,0);
        for(auto u:edges)
        {
            g[u[1]]=1;
        }
        vector<int>ans;
        for(int u=0;u<n;u++)
            if(!g[u]) ans.push_back(u);
        return ans;
    }
};