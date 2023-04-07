class Solution {
public:
    bool flag;
    int cnt;
    void fun(vector<vector<int>>& g,int i,int j)
    {
        if(i<0 || j<0 || i>=g.size()|| j>=g[0].size())
        {
            flag=false;
            return;
        }
        else if(g[i][j]==1)
        {
            cnt++;
            g[i][j]=0;
            fun(g,i-1,j);
            fun(g,i+1,j);
            fun(g,i,j-1);
            fun(g,i,j+1);
        }
        else return;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),i,j,ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                flag=true;
                if(grid[i][j]==1)
                {
                    cnt=0;
                    fun(grid,i,j);
                    if(flag) ans+=cnt;
 
                }
            }
        }
        return ans;
    }
};