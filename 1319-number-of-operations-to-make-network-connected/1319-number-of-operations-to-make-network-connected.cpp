class Solution {
public:
    vector<vector<int>>g;
    set<int>s;
    void dfs(int u)
    {
        for(auto v:g[u])
        {
            if(s.find(v)==s.end())
            {
                s.insert(v);
                dfs(v);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int l=connections.size(),ans=0;
        if(l<n-1) return -1;
        g.resize(n+1);
        for(auto u:connections )
        {
            g[u[0]].push_back(u[1]);
            g[u[1]].push_back(u[0]);
        }
        for(int i=0;i<n;i++)
        {
            if(s.find(i)==s.end())
            {
                s.insert(i);
                dfs(i);
                ans++;
            }
        }
        return ans-1;
    }
};