class Solution {
public:
    int fun(vector<int>& nums1, vector<int>& nums2,int i,int j,vector<vector<int>>&dp){
        if(i>=nums1.size() || j>=nums2.size())
            return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=fun(nums1,nums2,i+1,j,dp);
        for(int k=j;k<nums2.size();k++)
        {
            if(nums1[i]==nums2[k])
                ans=max(ans,1+fun(nums1,nums2,i+1,k+1,dp));
        }
        dp[i][j]=ans;
        return ans;
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dp(nums1.size(),vector<int>(nums2.size(),-1));
        return fun(nums1,nums2,0,0,dp);
    }
};