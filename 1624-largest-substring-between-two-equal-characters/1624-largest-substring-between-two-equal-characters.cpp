class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int>cnt(26,-1);
        int ans=-1,i,n=s.size();
        for(i=0;i<n;i++)
        {
            if(cnt[s[i]-'a']!=-1)
            {
                ans=max(ans,i-cnt[s[i]-'a']);
            }
            else cnt[s[i]-'a']=i+1;
        }
        return ans;
    }
};