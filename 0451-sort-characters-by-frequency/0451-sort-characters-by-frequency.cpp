class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        for(auto u:s)
            m[u]++;
        vector<pair<int,char>>v;
        for(auto u:m)
        {
            v.push_back({u.second,u.first});
        }
        sort(v.begin(),v.end());
        string ans="";
        for(int i=v.size()-1;i>=0;i--)
        {
            while(v[i].first--)
                ans+=v[i].second;
        }
        return ans;
    }
};