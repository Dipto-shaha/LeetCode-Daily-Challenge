class Solution {
public:
    int dp[500][500];
    int fun(string &s,int i,int j)
    {
        if(i>=j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        if(s[i]==s[j]) ans=fun(s,i+1,j-1);
        else ans=1+min(fun(s,i+1,j),fun(s,i,j-1));
        dp[i][j]=ans;
        return ans;
    }
    int minInsertions(string s) {
        memset(dp,-1,sizeof(dp));
        return fun(s,0,s.size()-1);
    }
};