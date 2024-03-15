class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,n=nums.size(), mul=1;
        vector<int>ans(n);
        for(i=0;i<n;i++){
            ans[i]=mul;
            mul*=nums[i];
        }
        mul=1;
        for(i=n-1;i>=0;i--){
            ans[i]*=mul;
            mul*=nums[i];
        }
        return ans;
    }
};