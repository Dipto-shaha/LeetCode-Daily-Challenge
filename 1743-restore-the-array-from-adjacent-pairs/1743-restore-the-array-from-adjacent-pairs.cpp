class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adj) {
        map<int,vector<int>>m;
        for(auto u:adj)
        {
            m[u[0]].push_back(u[1]);
            m[u[1]].push_back(u[0]);
        }
        int start,cnt=adj.size();
        for(auto u:m)
        {
            if(u.second.size()==1)
            {
                start=u.first;
                break;
            }
            //cout<<u.first<<" "<<u.second.size()<<" ";
        }
        vector<int>ans;
        set<int>s;
        while(cnt--)
        {
            ans.push_back(start);
            s.insert(start);
            if(s.find(m[start][0])==s.end())
                start=m[start][0];
            else if(m[start].size()>=2) start=m[start][1];
            else break;
        }
        ans.push_back(start);
        return ans;
        
    }
};