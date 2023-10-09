class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int r= upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        if(l<=r) return {l,r};
        return {-1,-1};
     
    }
};