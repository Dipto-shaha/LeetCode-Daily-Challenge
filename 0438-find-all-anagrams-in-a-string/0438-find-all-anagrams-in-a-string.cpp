class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int i,j,n=p.size(),m;
        vector<int>cnt(26,0),f(26,0);
        for(i=0;i<n;i++)
        {
            cnt[p[i]-'a']++;
        }
        m=s.size();
        for(i=0;i<m;i++)
        {
            f[s[i]-'a']++;
            if(i+1>=n)
            {
                bool flag=true;
                for(j=0;j<26;j++)
                {
                    if(cnt[j]==f[j])
                        continue;
                    else{ flag=false;break;}
                }
                if(flag) 
                {
                    ans.push_back(i-n+1);
                }
                f[s[i-n+1]-'a']--;
            }
        }
        return ans;
    }
};