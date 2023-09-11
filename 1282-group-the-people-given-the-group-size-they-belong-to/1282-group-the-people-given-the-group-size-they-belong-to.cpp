class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        int i,n=g.size();
        vector<vector<int>>ans,temp(n+1);
        for( i=0;i<n;i++)
        {
            temp[g[i]].push_back(i);
        }
        for(i=1;i<=n;i++)
        {
            vector<int>t;
            for(auto u:temp[i])
            {
                t.push_back(u);
                if(t.size()==i)
                {
                    ans.push_back(t);
                    t.clear();
                }
                
            }
        }
        return ans;
    }
};