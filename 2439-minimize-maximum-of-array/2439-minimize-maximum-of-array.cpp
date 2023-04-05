class Solution {
public:
    bool check(vector<int>&nums,int mx)
    {
        long long int i,n=nums.size(),temp=0;
        for(i=n-1;i>0;i--)
        {
            if(nums[i]+temp>mx)
            {
                temp=temp+nums[i]-mx;
            }
            else temp=0;
        }
        if(nums[0]+temp<=mx) return true;
        return false;
        
    }
    int minimizeArrayValue(vector<int>& nums) {
        int mx=0,ans;
        for(auto u:nums)
            mx=max(mx,u);
        int li=0,hi=mx,mid;
        ans=mx;
        while(li<=hi)
        {
            mid=(li+hi)/2;
           // cout<<mid<<"\n";
            if(check(nums,mid)) hi=mid-1,ans=mid;
            else li=mid+1;
        }
        return ans;
    }
};