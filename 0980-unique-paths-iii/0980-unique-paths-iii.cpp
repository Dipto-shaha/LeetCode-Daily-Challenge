class Solution {
public:
    int n,m,cnt,ans;
    void dfs(vector<vector<int>>& grid,int i,int j,int current)
    {
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==-1) return;
        if(grid[i][j]==2) 
        {
            if(current==cnt) ans++;
            return;
        }
        grid[i][j]=-1;
        dfs(grid,i+1,j,current+1);
        dfs(grid,i,j+1,current+1);
        dfs(grid,i-1,j,current+1);
        dfs(grid,i,j-1,current+1);
        grid[i][j]=0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int i,j,dx,dy;
        n=grid.size(),m=grid[0].size(),cnt=1,ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j]==1) dx=i,dy=j;
                else if(grid[i][j]==0) cnt++;
            }
        }
        dfs(grid,dx,dy,0);
        return ans;
    }
};