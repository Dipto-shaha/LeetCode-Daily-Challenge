class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long ans=0,i,n=nums.size(),last,temp;
        last=nums[n-1];
        for(i=n-2;i>=0;i--)
        {
            if(nums[i]<=last)
                last=nums[i];
            else
            {
                temp=nums[i]/last;
                if(nums[i]%last) temp++;
                ans+=temp-1;
                last=nums[i]/temp;
                  
            }
        }
        return ans;
    }
};