class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size(),ans=INT_MAX;
        if(n<=3) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=3;i++){
            ans =min(ans,nums[n-4+i]-nums[i]);
        }
       
        return ans;
    }
};