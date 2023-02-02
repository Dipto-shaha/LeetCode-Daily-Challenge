class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int>cnt(26);
        int i,n=words.size(),l,l2,j;
        for(i=0;i<26;i++)
        {
            cnt[order[i]-'a']=i;
        }
        for(i=1;i<n;i++)
        {
            if(cnt[words[i][0]-'a']>cnt[words[i-1][0]-'a'])
                continue;
            else if(cnt[words[i][0]-'a']==cnt[words[i-1][0]-'a'])
            {
                l=words[i].size();
                l2=words[i-1].size();
                j=0;
                bool flag=false;
                while(j<min(l,l2))
                {
                    if(cnt[words[i][j]-'a']>cnt[words[i-1][j]-'a'])
                    {flag=true;break;}
                    else if(cnt[words[i][j]-'a']<cnt[words[i-1][j]-'a'])
                        return false;
                    j++;
                }
                if(!flag && l2>l)return false;
            }
            else return false;
        }
        return true;
    }
};