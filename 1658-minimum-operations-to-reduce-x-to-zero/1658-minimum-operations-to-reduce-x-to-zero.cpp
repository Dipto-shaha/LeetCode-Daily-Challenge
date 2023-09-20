class Solution {
public:
    int bs(vector<int>& temp, int t)
    {
        int li=0,hi=temp.size()-1,mid;
        while(li<=hi)
        {
            mid=(li+hi)/2;
            if(temp[mid]==t) return mid;
            else if(temp[mid]<t) li=mid+1;
            else hi=mid-1;
        }
        return -1;
    }
    int minOperations(vector<int>& nums, int x) {
        int i,n=nums.size(),ans=INT_MAX,last=0,val;
        vector<int>temp(n+1);
        temp[0]=0;
        for(i=0;i<n;i++)
        {
            temp[i+1]+=temp[i]+nums[i];
            if(temp[i+1]==x) ans=min(ans,i+1);
        }
        for(i=n-1;i>=0;i--)
        {
            last+=nums[i];
            if(last>x) break;
            val=bs(temp,x-last);
            if(val!=-1 && val<i)
                ans=min(ans,val+n-i);
        }
        if(ans==INT_MAX) ans=-1;
        return ans;
    }
};