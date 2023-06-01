class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]) return -1;
        int ans=1,i,j,k,dx[]={1,-1,0,0,1,-1,1,-1},dy[]={0,0,1,-1,1,-1,-1,1};
        int tempx,tempy,n=grid.size(), cnt;
        if(n==1) return 1;
        queue<pair<int,int>>q;
        q.push({0,0});
        while(!q.empty())
        {
            cnt=q.size();
            ans++;
            while(cnt--)
            {
                tempx=q.front().first;
                tempy=q.front().second;
                q.pop();
                for(k=0;k<8;k++)
                {
                    if(tempx+dx[k]<0 || tempx+dx[k]>=n || tempy+dy[k]<0 || tempy+dy[k]>=n || grid[tempx+dx[k]][tempy+dy[k]] )
                        continue;
                    grid[tempx+dx[k]][tempy+dy[k]]+=1;
                    if(tempx+dx[k]==n-1 && tempy+dy[k]==n-1) return ans;
                    q.push({tempx+dx[k],tempy+dy[k]});
                }
            }
        }
        return -1;
    }
};