class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int i,j,k,u,v,n=mat.size(),m=mat[0].size();
        vector<vector<int>>ans(n,vector<int>(m,-1));
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        queue<pair<int,int>>q;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty())
        {
            u=q.front().first;
            v=q.front().second;
            q.pop();
            for(k=0;k<4;k++)
            {
                i=u+dx[k];
                j=v+dy[k];
                if(i>=0 && i<n && j<m && j>=0 && ans[i][j]==-1)
                {
                    ans[i][j]=ans[u][v]+1;
                    q.push({i,j});
                }
            }
        }
        return ans;
    }
};