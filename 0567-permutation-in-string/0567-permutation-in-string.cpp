class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i,j,n=s1.size(),m;
        vector<int>cnt(26,0),f(26,0);
        for(i=0;i<n;i++)
        {
            cnt[s1[i]-'a']++;
        }
        m=s2.size();
        for(i=0;i<m;i++)
        {
            f[s2[i]-'a']++;
            if(i+1>=n)
            {
                bool flag=true;
                for(j=0;j<26;j++)
                {
                    if(cnt[j]==f[j])
                        continue;
                    else{ flag=false;break;}
                }
                if(flag) return true;
                f[s2[i-n+1]-'a']--;
            }
        }
        return false;
    }
};