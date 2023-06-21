class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& c) {
        long long int i,n=c.size(),now=0,ans=1e18;
        vector<pair<int,int>>p(n);
        vector<long long int>temp(n),cost(n);
        for(i=0;i<n;i++)
        {   
            p[i]={nums[i],c[i]};
        }
        sort(p.begin(),p.end());
        for(i=0;i<n;i++)
        {
            if(i)
            { 
                temp[i]=temp[i-1]+p[i].first*1LL*p[i].second;
                cost[i]=cost[i-1]+(int)p[i].second;
            }
            else 
            {
                temp[i]=p[i].first*1LL*p[i].second;
                cost[i]=p[i].second;
            }
            
        }
         for(i=0;i<n;i++)
        {
            if(i)
            {
                now+=p[i].first*cost[i-1]-temp[i-1]+temp[n-1]-temp[i];
                now-=p[i].first*(cost[n-1]-cost[i]);
            }
            else
            {
                now+=temp[n-1]-p[i].first*cost[n-1];
            }
            ans=min(ans,now);
            now=0;
        }
        return ans;
    }
};