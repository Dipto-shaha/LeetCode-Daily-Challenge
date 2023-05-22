class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        vector<pair<int,int>>v;
        vector<int>ans;
        for(int u:nums) m[u]++;
        for(auto u:m)
            v.push_back({u.second,u.first});
        sort(v.begin(),v.end());
        for(int i=v.size()-1;k>0 && i>=0;k--,i--)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};