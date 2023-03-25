class Solution {
public:
    vector<vector<int>>g;
    bool visit[100000];
    int ans;
    void dfs(int u)
    {
        for(int v:g[u])
        {
            if(!visit[v])
            {
                visit[v]=true;
                dfs(v);
                ans++;
            }
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        g.resize(n);
        for(auto u:edges)
        {
            g[u[0]].push_back(u[1]);
            g[u[1]].push_back(u[0]);
        }
        memset(visit,false,sizeof(visit));
        long long cnt=(n*1LL*(n-1))/2;
        for(int i=0;i<n;i++)
        {
            if(!visit[i])
            {
                visit[i]=true;
                ans=1;
                dfs(i);
                cnt-=(ans*1LL*(ans-1))/2;
            }
        }
        
        return cnt;
    }
};