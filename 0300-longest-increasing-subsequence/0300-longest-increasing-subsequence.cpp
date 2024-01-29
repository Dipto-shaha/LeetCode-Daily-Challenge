class Solution {
public:
    int dp[2500][2501];
    int fun(vector<int>& nums,int i,int last)
    {
        if(i>=nums.size()) return 0;
        if(dp[i][last+1]!=-1) return dp[i][last+1];
        int ans=0;
        if(last==-1   ||  nums[i]>nums[last])
            ans=1+fun(nums,i+1,i);
        ans=max(ans,fun(nums,i+1,last));
        dp[i][last+1]=ans;
        return ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return fun(nums,0,-1);
    }
};