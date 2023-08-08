class Solution {
public:
    int search(vector<int>& nums, int target) {
        int li=0,hi=nums.size()-1,mid;
        while(li<=hi)
        {
            mid=(li+hi)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>=nums[li])
            {
                if(target>=nums[li] && target<nums[mid])
                    hi=mid-1;
                else li=mid+1;
            }
            else
            {
                if(target>nums[mid] && target<=nums[hi])
                    li=mid+1;
                else  hi=mid-1;
            }
        }
        return -1;
    }
};