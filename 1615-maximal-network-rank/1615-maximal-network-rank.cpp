class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<set<int>>v(n);
        for(auto u:roads)
        {
            v[u[0]].insert(u[1]);
            v[u[1]].insert(u[0]);
        }
        int ans=0,temp,i,j;
        for(i=0;i<n;i++)
        {
           for(j=i+1;j<n;j++)
           {
                temp=v[i].size()+v[j].size();
                if(v[i].find(j)!=v[i].end()) temp--;
                ans=max(ans,temp);
           }
        }
        return ans;
    }
};