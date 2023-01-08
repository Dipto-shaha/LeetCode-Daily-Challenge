class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int i,j,ans=1,n=points.size(),x,y;
        for(i=0;i<n;i++)
        {
            map<pair<int,int>,int>cnt;
            for(j=0;j<n;j++)
            {
                if(i!=j )
                {
                    x=points[i][0]-points[j][0];
                    y=points[i][1]-points[j][1];
                    auto u=make_pair(x/__gcd(x,y),y/__gcd(x,y));
                    cnt[u]++;
                    ans=max(ans,cnt[u]+1);
                }
            }
        }
        return ans;
    }
};