class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m,cnt;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto u:m)
        {
            cnt[u.second]++;
            if(cnt[u.second]>1) return false;
        }
        return true;
    }
};