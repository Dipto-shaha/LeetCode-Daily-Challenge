class Solution {
public:
    long long fun(vector<vector<int>>& q,int i,vector<long long>&dp){
        if(i>=q.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        dp[i]=max(q[i][0]+fun(q,i+q[i][1]+1,dp),fun(q,i+1,dp));
        return dp[i];
    }
    long long mostPoints(vector<vector<int>>& q) {
        vector<long long>dp(q.size(),-1);
        return fun(q,0,dp);
    }
};