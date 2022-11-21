class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& open) {
        queue<pair<int,int>>q;
        q.push({open[0],open[1]});
        maze[open[0]][open[1]]='+';
        int ans=0,i,dx[]={1,-1,0,0},dy[]={0,0,1,-1},m,n,x,y,l;
        m=maze.size();
        n=maze[0].size();
        while(!q.empty())
        {
            l=q.size();
            ans++;
            while(l--)
            {
                auto u=q.front();
                x=u.first;
                y=u.second;
                q.pop();
                for(i=0;i<4;i++)
                {
                    if(dx[i]+x>=0 && dx[i]+x<m && dy[i]+y>=0 && dy[i]+y<n && maze[dx[i]+x][dy[i]+y]=='.')
                    {
                        if(dx[i]+x==0 || dx[i]+x==m-1 || dy[i]+y==0|| dy[i]+y==n-1 )
                        {
                            return ans;
                        }
                        q.push({dx[i]+x,dy[i]+y});
                        maze[dx[i]+x][dy[i]+y]='+';
                    }
                }
            }
        }
        return -1;
        
    }
};