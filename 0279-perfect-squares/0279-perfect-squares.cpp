class Solution {
public:
    int numSquares(int n) {
        if(n==0) return 0;
        vector<int>square(n+1,INT_MAX);
        int i,j,ans;
        square[0]=0;
        for(i=1;i<=n;i++)
        {
            ans=INT_MAX;
            for(j=1;j*j<=i;j++)
            {
                ans=min(ans,1+square[i-j*j]);
            }
            square[i]=ans;
        }
        return square[n];
    }
};