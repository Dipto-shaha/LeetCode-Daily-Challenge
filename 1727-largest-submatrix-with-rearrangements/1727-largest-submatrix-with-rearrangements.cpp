class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int i,j,n=matrix.size(),m=matrix[0].size(),ans=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j!=0 && matrix[j][i])
                    matrix[j][i]+=matrix[j-1][i];
            }
        }
        for(i=0;i<n;i++)
        {
            sort(matrix[i].begin(),matrix[i].end());
            for(j=0;j<m;j++)
            {
                ans=max(matrix[i][j]*(m-j),ans);
            }
                
        }
        return ans;
    }
};