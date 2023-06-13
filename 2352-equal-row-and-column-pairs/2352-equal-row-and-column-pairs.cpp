class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int i,j,k,cnt,ans=0,n=grid.size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cnt=1;
                for(k=0;k<n;k++)
                {
                    if(grid[i][k]!=grid[k][j])
                    {
                        cnt=0;break;
                    }
                }
                ans+=cnt;
            }
        }
        return ans;
    }
};