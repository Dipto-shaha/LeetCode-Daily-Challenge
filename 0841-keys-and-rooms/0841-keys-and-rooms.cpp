class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size(),u;
        bool vis[n];
        memset(vis,true,sizeof(vis));
        queue<int>q;
        q.push(0);
        while(!q.empty())
        {
            u=q.front();
            q.pop();
            vis[u]=false;
            for(int v:rooms[u])
            {
                if(vis[v])
                  q.push(v);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i])
              return false;
        }
        return true;
    }
};