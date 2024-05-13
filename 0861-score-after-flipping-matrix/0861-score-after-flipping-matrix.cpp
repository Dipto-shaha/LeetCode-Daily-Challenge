class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),i,j,cnt=0,ans=0;
        for(i=0;i<n;i++){
            if(grid[i][0]==1) continue;
            for(j=0;j<m;j++) grid[i][j]=(1+grid[i][j])%2;
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(grid[j][i]==1) cnt++;
            }
            if(cnt<(n/2.0)) cnt=n-cnt;
            ans+=cnt*(1<<(m-i-1));
            cnt=0;
        }
        return ans;
    }
};