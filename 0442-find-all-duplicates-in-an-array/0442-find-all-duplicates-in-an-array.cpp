class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i,n=nums.size(),temp;
        vector<int>ans;
        for(i=0;i<n;i++){
            temp= (nums[i]<0)? nums[i]*-1 : nums[i];
            if(nums[temp-1]<0)
                ans.push_back(temp);
            nums[temp-1]*=-1;
        }
        return ans;
    }
};