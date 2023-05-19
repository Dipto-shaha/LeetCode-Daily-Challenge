class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int i,n=graph.size(),u;
        vector<int>color(n,-1),visit(n,-1);
        for(i=0;i<n;i++)
        {
            if(visit[i]==-1)
            {
                queue<int>q;
                q.push(i);
                while(!q.empty())
                {
                    u=q.front();
                    q.pop();
                    visit[i]=0;
                    for(auto v:graph[u])
                    {
                        if(color[v]==-1)
                        {
                            q.push(v);
                            color[v]=!color[u];
                        }
                        else if(color[v]==color[u])
                            return false;
                    }
                }
            }
        }
        return true;
    }
};