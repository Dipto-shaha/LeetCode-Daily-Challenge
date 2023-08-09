class Solution {
public:
   
    int minimizeMax(vector<int>& nums, int p) {
        if(!p) return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int li=0,hi=nums[n]-nums[0],i,cnt,mid,ans;
        while(li<=hi)
        {
            cnt=0;
            mid=(li+hi)/2;
            for(i=1;i<=n;i++)
            {
                if(nums[i]-nums[i-1]<=mid)
                {
                    cnt++;
                    i++;
                }
            }
            if(cnt>=p)
            {
                ans=mid;
                hi=mid-1;
            }
            else li=mid+1;
        }
        return ans;
    }
};