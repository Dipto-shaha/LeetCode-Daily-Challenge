class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        vector<int>cnt(26,0),cnt2(26,0);
        for(int i=0;word1[i]!='\0';i++)
        {
            cnt[word1[i]-'a']++;
        }
        for(int i=0;word2[i]!='\0';i++)
        {
            if(cnt[word2[i]-'a']==0 )
                return false;
            cnt2[word2[i]-'a']++;
        }
        sort(cnt.begin(),cnt.end());
        sort(cnt2.begin(),cnt2.end());
        return cnt==cnt2;
    }
};