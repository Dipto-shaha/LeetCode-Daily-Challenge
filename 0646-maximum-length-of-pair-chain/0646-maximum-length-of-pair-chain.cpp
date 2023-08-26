class Solution {
public:
    int dp[1001][2002];
    int fun(vector<vector<int>>& pairs,int i,int last)
    {
        if(i>=pairs.size()) return 0;
        if(dp[i][1001+last]!=-1) return dp[i][last+1001];
        int ans;
        if(pairs[i][0] > last)
            ans= max(1+fun(pairs,i+1,pairs[i][1]),fun(pairs,i+1,last));
        else ans= fun(pairs,i+1,last);
        dp[i][last+1001]=ans;
        return ans;
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        memset(dp,-1,sizeof(dp));
        return fun(pairs,0,-1001);
    }
};