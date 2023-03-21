class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0,cnt=0;
        for(auto u:nums)
        {
            if(u)
            {
                ans+=(cnt*(cnt+1))/2;
                cnt=0;
            }
            else cnt++;
        }
        ans+=(cnt*(cnt+1))/2;
        return ans;

    }
};