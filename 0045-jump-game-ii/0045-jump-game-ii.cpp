class Solution {
public:
    vector<int>dp;
    int fun(vector<int>& nums,int j)
    {
        if(j+1==nums.size())
            return 0;
        else if(j>=nums.size()) return 2*nums.size();
        if(dp[j]!=-1) return dp[j];
        int ans=1e5;
        for(int i=1;i<=nums[j];i++)
        {
            ans=min(ans,1+fun(nums,j+i));
        }
        dp[j]=ans;
        return ans;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        dp.resize(n,-1);
        return fun(nums,0);
    }
};