class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int ans=INT_MAX,li=0,hi=1e6,mid,sum,cnt,mx;
        while(li<=hi)
        {
            mid=(li+hi)/2;
            sum=0;
            cnt=0;
            mx=INT_MIN;
            for(auto u:weights)
            {
                if(u>mid)
                {
                    cnt=2*days;
                    break;
                }
                else if(sum+u<=mid)
                   sum+=u;
                else
                {
                    mx=max(mx,sum);
                    cnt++;
                    sum=u;
                }
            }
            mx=max(mx,sum);
            cnt++;
            if(cnt<=days)
            {
                ans=min(ans,mx);
                hi=mid-1;
            } 
            else li=mid+1;
        }
        return ans;
    }
};