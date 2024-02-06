class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>>m;
        int n=strs.size(),i;
        string temp;
        for(i=0;i<n;i++)
        {
            temp=strs[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto u:m)
        {
            vector<string>group;
            for(auto v:u.second)
            {
                group.push_back(strs[v]);
            }
            ans.push_back(group);
        }
        return ans;
    }
};