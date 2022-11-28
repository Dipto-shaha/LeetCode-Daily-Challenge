class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>win,lose;
        int i,n=matches.size();
        for(i=0;i<n;i++)
        {
            win[matches[i][0]]++;
            lose[matches[i][1]]++;
        }
        vector<vector<int>>ans(2);
        for(auto u:win)
        {
            if(lose[u.first]>0)
               continue;
            else ans[0].push_back(u.first);
        }
        for(auto u:lose)
        {
            if(lose[u.first]==1)
                ans[1].push_back(u.first);
        }
        return ans;
        
    }
};