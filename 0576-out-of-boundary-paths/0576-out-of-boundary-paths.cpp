class Solution {
public:
    int dp[51][51][51],mod=1e9+7;
    int fun(int m,int n,int cnt,int i,int j)
    {
        if(i<0 || i>=m || j<0 || j>=n) return 1;
        if(cnt<=0) return 0;
        if(dp[i][j][cnt]!=-1) return dp[i][j][cnt];
        long long int ans=0;
        ans=(ans+fun(m,n,cnt-1,i+1,j))%mod;
        ans=(ans+fun(m,n,cnt-1,i-1,j))%mod;
        ans=(ans+fun(m,n,cnt-1,i,j+1))%mod;
        ans=(ans+fun(m,n,cnt-1,i,j-1))%mod;
        dp[i][j][cnt]=ans;
        return dp[i][j][cnt];
            
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));
        return fun(m,n,maxMove,startRow,startColumn);
    }
};