class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long int ans=0,i,n=nums.size();
        vector<long long int>sum(n+1,0);
        sort(nums.begin(),nums.end());
        for(i=1;i<=n;i++)
        {
            sum[i]=sum[i-1]+nums[i-1];
            long long int li=1,hi=i,mid,temp;
            while(li<=hi)
            {
                mid=(li+hi)/2;
                temp=(i-mid+1)*nums[i-1]-(sum[i]-sum[mid-1]);
                if(temp<=k && temp>=0)
                {
                    ans=max(ans,i-mid+1);
                    hi=mid-1;
                }
                else li=mid+1;
            }            
        }
        return ans;
    }
};