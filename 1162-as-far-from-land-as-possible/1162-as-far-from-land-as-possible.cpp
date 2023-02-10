class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int ans=-1,i,j,n=grid.size(),m=grid[0].size(),k,x,y;
        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
        queue<pair<int,int>>q;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    q.push({i,j});
                }
            }
        }
        if(q.size()==n*m || q.size()==0) return -1;
        while(!q.empty())
        {
            int t=q.size();
            ans++;
            while(t--)
            {
                auto u=q.front();
                q.pop();
                x=u.first;
                y=u.second;
                for(k=0;k<4;k++)
                {
                    if(x+dx[k]>=0 && x+dx[k]<n && y+dy[k]>=0 && y+dy[k]<m && grid[x+dx[k]][y+dy[k]]==0)
                    {
                        q.push({x+dx[k],y+dy[k]});
                        grid[x+dx[k]][y+dy[k]]=1;
                    }
                }
            }
        }
        return ans;
    }
};