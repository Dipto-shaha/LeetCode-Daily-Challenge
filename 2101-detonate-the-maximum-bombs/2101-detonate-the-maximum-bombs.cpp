class Solution {
public:
    int maximumDetonation(vector<vector<int>>& v) {
        int ans=1,cnt,i,j,n=v.size();
        int g[n][n];
        queue<int>q;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                long long int temp=((v[i][0]-v[j][0])*1LL*(v[i][0]-v[j][0]))+((v[i][1]-v[j][1])*1LL*(v[i][1]-v[j][1]));
                long long int r=(v[i][2]);
                if((r*r)>=temp )
                    g[i][j]=1;
                else g[i][j]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            vector<int>done(n,-1);
            done[i]=0;
            q.push(i);
            cnt=1;
            while(!q.empty())
            {
                for(j=0;j<n;j++)
                {
                    if(g[q.front()][j]==1 && done[j]==-1)
                    {
                        cnt++;
                        done[j]=0;
                        q.push(j);
                    }
                }
                q.pop();                    
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};