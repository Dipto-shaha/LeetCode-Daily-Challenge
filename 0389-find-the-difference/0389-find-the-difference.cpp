class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>v(26,0);
        for(auto u:t)
            v[u-'a']++;
        for(auto u:s)
        {
            v[u-'a']--;
        }
        for(int i=0;i<26;i++)
            if(v[i]) return i+'a';
        return ' ';
    }
};