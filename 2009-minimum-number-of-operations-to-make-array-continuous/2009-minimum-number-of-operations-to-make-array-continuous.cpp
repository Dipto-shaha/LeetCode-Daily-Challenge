class Solution {
public:
    int bs(vector<int>&nums,int i,int n)
    {
        int li=i,hi=nums.size()-1,mid,ans;
        while(li<=hi)
        {
            mid=(li+hi)/2;
            if(nums[mid]<=(nums[i]+n-1))
            {
                ans=mid;
                li=mid+1;
            }
            else hi=mid-1;
        }
        //cout<<ans<<" "<<nums[i]<<"\n";
        return n-ans+i-1;
    }
    int minOperations(vector<int>& nums) {
        int i,m,n=nums.size(),cnt;
        set<int>s;
        for(auto u:nums)
           s.insert(u);
        vector<int>v(s.begin(),s.end());
        m=v.size();
        cnt=n;
        for(i=0;i<m;i++)
        {
            cnt=min(cnt,bs(v,i,n));
        }
        return cnt;
    }
};