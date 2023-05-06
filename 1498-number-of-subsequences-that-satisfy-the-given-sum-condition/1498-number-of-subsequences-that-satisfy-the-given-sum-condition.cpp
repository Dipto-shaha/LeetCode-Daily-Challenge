class Solution {
public:
    int binpow(int a, int b,int mod)
    {
        long res = 1;
        while (b > 0)
        {
            if (b & 1)
                res = (res *1LL* a )% mod;
            a =( a *1LL* a)%mod;
            b >>= 1;
        }
        if(res<0) return res+mod;
        return res;
    }
    int bs(vector<int>&nums,int li,int hi,int t)
    {
        int mid,ans;
        while(li<=hi)
        {
            mid=(li+hi)/2;
            if(nums[mid]<=t)
            {
                ans=mid;
                li=mid+1;
            }
            else hi=mid-1;
        }
        return ans;
    }
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i,n=nums.size(),k,mod=1e9+7;
        long long int ans=0;
        for(i=0;i<n;i++)
        {
            if(2*nums[i]>target) break;
            k=bs(nums,i,n-1,target-nums[i]);
            k=k-i;
            ans=(ans+binpow(2,k,mod))%mod;
        }
        return ans;
    }
};