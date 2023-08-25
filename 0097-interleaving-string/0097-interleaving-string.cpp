class Solution {
public:
    int dp[101][101][201];
    int fun(int i,int j,int k, string s1, string s2, string s3)
    {
        if(s3.size()<=k && s1.size()<=i && s2.size()<=j) return 1;
        if(dp[i][j][k]!=-1) return dp[i][j][k];
        dp[i][j][k]= (s1[i]==s3[k] && fun(i+1,j,k+1,s1,s2,s3)) || (s2[j]==s3[k] && fun(i,j+1,k+1,s1,s2,s3));
        return dp[i][j][k];
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size()!=s3.size()) return false;
        memset(dp,-1,sizeof(dp));
        return fun(0,0,0,s1,s2,s3);
    }
};