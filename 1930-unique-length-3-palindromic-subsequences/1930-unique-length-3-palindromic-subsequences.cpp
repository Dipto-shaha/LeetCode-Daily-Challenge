class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<set<int>>v(26);
        map<int,int>first,last;
        int i,n=s.size(),ans=0;
        for(i=0;i<n;i++)
        {
            if(!first[s[i]-'a'])
                first[s[i]-'a']=i+1;
            else last[s[i]-'a']=i+1;
        }
        for(i=0;i<n;i++)
        {
            for(int j=0;j<26;j++)
            {
                if(last[j] && last[j]-1>i && first[j]-1<i)
                {
                    v[j].insert(s[i]-'a');
                   // cout<<char(j+'a')<<" "<<char(i+'a')<<"\n";
                }
            }
        }
        for(i=0;i<26;i++)
        {
            ans+=v[i].size();
        }
        return ans;
    }
};