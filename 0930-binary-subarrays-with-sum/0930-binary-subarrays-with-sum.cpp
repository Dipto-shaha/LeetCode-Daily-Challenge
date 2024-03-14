class Solution {
public:
    int ifGoalisZero(vector<int>& nums){
        int ans=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]) ans+=(cnt*(cnt+1))/2,cnt=0;
            else cnt++;
        }
        ans+=(cnt*(cnt+1))/2;
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        if(!goal) return ifGoalisZero(nums);
        vector<int>pos;
        int ans=0,cnt=0,n;
        for(int i=0;i<nums.size();i++){
            if(nums[i]) pos.push_back(cnt),cnt=0;
            else cnt++;
        }
        n=pos.size()-goal+1;
        pos.push_back(cnt);
        for(int i=0;i<n;i++){
            ans+=(1+pos[i]+pos[i+goal]+pos[i]*pos[i+goal]);
        }
        return ans;
    }
};