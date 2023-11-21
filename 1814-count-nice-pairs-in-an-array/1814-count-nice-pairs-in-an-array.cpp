class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int temp,rev;
        long long ans=0,mod=1e9+7;
        map<int,int>m;
        for(auto u:nums)
        {
            temp=u;
            rev=0;
            while(u)
            {
                rev=rev*10+u%10;
                u/=10;
            }
            m[temp-rev]++;
        }
        for(auto u:m)
        {
            temp=u.second;
            //cout<<temp<<" ";
            temp=(temp*1LL*(temp-1)/2)%mod;
            ans=(ans+temp)%mod;
        }
        return ans;
    }
};