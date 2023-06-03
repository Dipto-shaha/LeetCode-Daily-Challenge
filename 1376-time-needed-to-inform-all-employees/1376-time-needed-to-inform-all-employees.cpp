class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>>g(n);
        for(int i=0;i<n;i++)
        {
            if(manager[i]==-1) continue;
            g[manager[i]].push_back(i);
        }
        queue<pair<int,int>>q;
        q.push({headID,0});
        int t,ans=0,time;
        while(!q.empty())
        {
            t=q.size();
            while(t--)
            {
                int u=q.front().first;
                time=q.front().second+informTime[u];
                ans=max(ans,time);
                q.pop();
                for(auto v:g[u])
                    q.push({v,time});
            }
        }
        return ans;
    }
};