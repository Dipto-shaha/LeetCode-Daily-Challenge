class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination) return true;
        int m= edges.size();
        vector<vector<int>>g(n);
        for(int i=0;i<m;i++)
        {
            g[edges[i][0]].push_back(edges[i][1]);
            g[edges[i][1]].push_back(edges[i][0]);
        }
        int color[n];
        memset(color,0,sizeof(color));
        queue<int>q;
        q.push(source);
        color[source]=1;
        while(q.size()){
            int x=q.front();
            q.pop();
            for(auto u:g[x])
            {
                if(color[u]==0)
                {
                    q.push(u);
                    color[u]=1;
                }
                if(u==destination) return true;
            }
            color[x]=2;
        }
        return false;
        
    }
};