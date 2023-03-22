class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>>g(n+1);
        for(auto u:roads)
        {
            g[u[0]].push_back({u[1],u[2]});
            g[u[1]].push_back({u[0],u[2]});
        }
        roads.clear();
        queue<int>q;
        bool visit[n+1];
        memset(visit,false,sizeof(visit));
        visit[1]=true;
        q.push(1);
        int ans=INT_MAX;
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            for(auto v:g[u])
            {
                if(!visit[v.first])
                {
                    visit[v.first]=true;
                    q.push(v.first);
                }
                ans=min(ans,v.second);
            }
        }
        return ans;
    }
};