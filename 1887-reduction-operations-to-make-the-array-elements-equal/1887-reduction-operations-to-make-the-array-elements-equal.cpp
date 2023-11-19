class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,i,n=nums.size(),cnt=0;
        for(i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
                ans+=cnt;
            else
            {
                cnt++;
                ans+=cnt;
            }
        }
        return ans;
    }
};