class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<vector<int>>red(n),blue(n);
        int cnt=-1;
        for(auto u:redEdges)
        {
             red[u[0]].push_back(u[1]);
        }
        for(auto u:blueEdges)
        {
             blue[u[0]].push_back(u[1]);
        }
        queue<pair<int,int>>q;
        q.push({0,0});
        q.push({0,1});
        vector<int>ans(n);
        fill(ans.begin(),ans.end(),-1);
        ans[0]=0;
        int vis[n][2];
        memset(vis,-1,sizeof(vis));
        while(!q.empty())
        {
            int t=q.size();
            cnt++;
            while(t--)
            {
                auto [u,c]=q.front();
                q.pop();
                if(ans[u]!=-1)
                ans[u]=min(cnt,ans[u]);
                else ans[u]=cnt;
                if(c==0)
                {
                    for(auto v:blue[u])
                    {
                        if(vis[v][0]==-1)
                        q.push({v,1}),vis[v][0]=1;
                    }
                }
                else 
                {
                    for(auto v:red[u])
                    {
                        if(vis[v][1]==-1)
                          q.push({v,0}),vis[v][1]=1;
                    }
                }
            }
        }
        return ans;
    }
};