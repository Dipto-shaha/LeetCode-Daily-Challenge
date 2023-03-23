class Solution {
public:
    vector<vector<int>>g;
    bool visit[100001];
    void dfs(int u)
    {
        for(auto v:g[u])
        {
            if(visit[v])
            {
                visit[v]=false;
                dfs(v);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int l=connections.size(),ans=0;
        if(l<n-1) return -1;
        g.resize(n+1);
        memset(visit,true,sizeof(visit));
        for(auto u:connections )
        {
            g[u[0]].push_back(u[1]);
            g[u[1]].push_back(u[0]);
        }
        for(int i=0;i<n;i++)
        {
            if(visit[i])
            {
                visit[i]=false;
                dfs(i);
                ans++;
            }
        }
        return ans-1;
    }
};