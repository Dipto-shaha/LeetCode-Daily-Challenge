class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<int,int>m,m2;
        int i,n=s.size();
        for(int i=0;i<n;i++){
            if((m[s[i]] && m[s[i]]!=t[i]) || (m2[t[i]] && m2[t[i]]!=s[i]))
                return false;
            m[s[i]]=t[i];
            m2[t[i]]=s[i];
        }
        return true;
    }
};