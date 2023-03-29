class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        int ans=0,t,j,i,n=sat.size(),cnt;
        sort(sat.begin(),sat.end());
        for(i=0;i<n;i++)
        {
            cnt=0;
            for(j=i,t=1;j<n;j++,t++)
            {
                cnt+=sat[j]*t;
            }
            ans=max(ans,cnt);
            if(sat[i]>=0) break;
        }
        return ans;
    }
};