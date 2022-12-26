class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i,n=nums.size(),pos=n-1;
        for(i=n-2;i>=0;i--)
        {
            if(nums[i]+i>=pos)
                pos=i;
        }
        if(!pos) return true;
        return false;
    }
};