class Solution {
public:
    vector<vector<int>>dp;
    int fun(string &s,int k,int i,int j){
        if(i>s.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        if(j==0 || abs(s[i-1]-j)<=k)
            ans=max(ans,1+fun(s,k,i+1,s[i-1]));
        ans=max(ans,fun(s,k,i+1,j));
        dp[i][j]=ans;
        return ans;
    }
    int longestIdealString(string s, int k) {
        dp.resize(s.size()+1,vector<int>(150,-1));
        return fun(s,k,1,0);
    }
};