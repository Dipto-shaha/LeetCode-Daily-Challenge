class Solution {
public:
    int partitionString(string s) {
         vector<int>cnt(26,0);
        int ans=1;
        for(char u:s)
        {
            cnt[u-'a']++;
            if(cnt[u-'a']>=2)
            {
                ans++;
                for(int i=0;i<26;i++) cnt[i]=0;
                cnt[u-'a']++;
            }
        }
        return ans;
    }
};