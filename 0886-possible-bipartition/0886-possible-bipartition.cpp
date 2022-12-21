class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>>adj(n+1);
        int color[n+1];
        vector<bool>vis(n+1,false);
        int i,u,m=dislikes.size();
        for(i=0;i<m;i++)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        memset(color,-1,sizeof(color));
        queue<int>q;
        for(i=1;i<=n;i++)
        {
            if(vis[i]) continue;
            q.push(i);
            color[i]=1;
            while(!q.empty())
            {
                u=q.front();
                q.pop();
                if(vis[u]) continue;
                vis[u]=true;
                for(auto v:adj[u])
                {
                    //cout<<color[u]<<" "<<color[v]<<" "<<u<<" "<<v<<"\n";
                    if(color[v]==color[u])
                        return false;
                    color[v]=(color[u]+1)%2;
                    q.push(v);
                }
            }
        }
        return true;
    }
};