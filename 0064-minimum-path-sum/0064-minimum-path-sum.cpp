class Solution {
public:
    int n,m,dp[201][201];
    vector<vector<int>>g;
    int fun(int i,int j)
    {
        if(i+1==n && j+1==m) return g[i][j];
        if(i>=n || j>=m) return 2000;
        if(dp[i][j]!=-1) return dp[i][j];
        else
          dp[i][j]=  g[i][j]+min(fun(i+1,j),fun(i,j+1));
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        g=grid;
        n=g.size();
        m=g[0].size();
        grid.clear();
        memset(dp,-1,sizeof(dp));
        return fun(0,0);
    }
};