class Solution {
public:
    vector<int>d,c;
    int dp[400][400];
    int fun(int i,int n)
    {
        while( i<d.size() && d[i]<n ) i++;
        if(i>=d.size()) return 0;
        if(dp[i][n]!=-1) return dp[i][n];
        int ans=INT_MAX;
        ans=min(c[0]+fun(i+1,d[i]+1),ans);
        ans=min(c[1]+fun(i+1,d[i]+7),ans);
        ans=min(c[2]+fun(i+1,d[i]+30),ans);
        dp[i][n]=ans;
        return ans;
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        d=days;
        c=costs;
        memset(dp,-1,sizeof(dp));
        return fun(0,0);
    }
};