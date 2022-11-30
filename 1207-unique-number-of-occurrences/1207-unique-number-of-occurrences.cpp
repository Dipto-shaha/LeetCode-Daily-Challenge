class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m,cnt;
        for(auto u:arr)
        {
            m[u]++;
        }
        for(auto u:m)
        {
            cnt[u.second]++;
            if(cnt[u.second]>1) return false;
        }
        return true;
    }
};