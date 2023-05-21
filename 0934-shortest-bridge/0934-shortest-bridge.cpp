class Solution {
public:
    int n;
    queue<pair<int,int>>q;
    void dfs(int i,int j,vector<vector<int>>& grid)
    {
        if(i>=n || j>=n || i<0 || j<0 || grid[i][j]!=1)
             return;
        grid[i][j]=2;
        q.push({i,j});
        int dx[]={1,0,-1,0}, dy[]={0,1,0,-1};
        for(int k=0;k<4;k++)
            dfs(i+dx[k],j+dy[k],grid);       
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int i,j,flag=0,tempx,tempy,ans=INT_MAX,cnt=0;
        n=grid.size();
        int dx[]={1,0,-1,0}, dy[]={0,1,0,-1};
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    dfs(i,j,grid);
                    flag=1;
                    break;
                }
            }
            if(flag)break;
        }
        while(!q.empty())
        {
            flag=q.size();
            while(flag--)
            {
                
                auto u=q.front();
                q.pop();
                i=u.first,j=u.second;
                //cout<<i<<" "<<j<<"\n";
                for(int k=0;k<4;k++)
                {
                    tempx=i+dx[k];
                    tempy=j+dy[k];
                    if(tempx>=n || tempy>=n || tempx<0 || tempy <0)
                        continue;
                    else if(grid[tempx][tempy]==0)
                    {
                        grid[tempx][tempy]=2;
                        q.push({tempx,tempy});
                    }
                    else if(grid[tempx][tempy]==1)
                         ans=min(ans,cnt);
                }
            }
            cnt++;
        }
        return ans;
    }
};