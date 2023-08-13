class Solution {
public:
    int fun(vector<int>& nums,int i,vector<int>&dp)
    {
        int n=nums.size(),ans=0;
        if(i>=n) return 1;
        if(dp[i]!=-1) return dp[i];
        if(i+1<n && nums[i]==nums[i+1]) 
            ans |= fun(nums,i+2,dp);
        if(i+2<n)
        {
            if(nums[i]==nums[i+1] && nums[i]==nums[i+2] )
                ans |= fun(nums,i+3,dp);
            if(nums[i]+1==nums[i+1] && nums[i]+2==nums[i+2])
                ans |= fun(nums,i+3,dp);
        }
        dp[i]=ans;
        return ans;
    }
    bool validPartition(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return fun(nums,0,dp)==1;
    }
};