class Solution {
public:
    int dp[101];
    int fun(int i, vector<int>& nums)
    {
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        dp[i]=max(nums[i]+fun(i+2,nums),fun(i+1,nums));
        return dp[i];
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return fun(0,nums);
    }
};