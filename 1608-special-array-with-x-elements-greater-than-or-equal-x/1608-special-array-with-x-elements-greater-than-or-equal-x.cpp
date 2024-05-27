class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=nums.size(),last=-1;
        for(auto u:nums){
            if(u>=cnt && last<cnt) return cnt;
            cnt--;
            last=u;
        }
        return -1;
    }
};