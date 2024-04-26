class Solution {
public:
    int fun(vector<vector<int>>&grid, int col,int row,vector<vector<int>>&dp){
        if(row>=grid.size()) return 0;
        if(dp[row][col]!=INT_MAX) return dp[row][col];
        int ans=INT_MAX;
        for(int i=0;i<grid[0].size();i++){
            if(i==col) continue;
            ans =min(fun(grid,i,row+1,dp),ans);
        } 
        return dp[row][col] = grid[row][col]+ (ans!=INT_MAX ? ans : 0);
            
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),INT_MAX));
        int i,ans=INT_MAX;
        for(i=0;i<grid[0].size();i++){
            ans=min(ans, fun(grid, i,0,dp));
        }
        return ans;
    }
};