class Solution {
public:
    vector<vector<pair<int,int>>>g;
    bool visit[100000];
    int ans;
    void dfs(int u)
    {
        for(auto v:g[u])
        {
            if(!visit[v.first])
            {
                visit[v.first]=true;
                if(v.second)
                {
                     ans++;
                     v.second=0;
                }
                dfs(v.first);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        g.resize(n+1);
        for(auto u:connections)
        {
            g[u[0]].push_back({u[1],0});
            g[u[1]].push_back({u[0],1});

        }
        memset(visit,false,sizeof(visit));
        ans=0;
        visit[0]=true;
        dfs(0);
        return n-ans-1;
        
    }
};