class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0,i,n=nums.size(),last=-101;
        for(i=0;i<n;i++)
        {
            if(nums[i]!=last)
            {
                nums[k++]=nums[i];
                last=nums[i];
            }
        }
        return k;
    }
};