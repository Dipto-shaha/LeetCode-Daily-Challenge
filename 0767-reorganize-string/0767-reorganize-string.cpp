class Solution {
public:
    string reorganizeString(string s) {
        int ch[26];
        memset(ch,0,sizeof(ch));
        int i=0,n,j,mx=0,mxchr=-1;
        for(auto u:s)
        {
            ch[u-'a']++;
            if(ch[u-'a']>mx)
                mx=ch[u-'a'],mxchr=u;
        }
        if(mx>=((s.size()+1)/2)+1) return "";
        while(mx)
        {
            s[i]=mxchr;
            mx--;
            i+=2;
        }
        ch[mxchr-'a']=0;
        for(j=0;j<26;j++)
        {
            while(ch[j])
            {
                if(i>=s.size()) i=1;
                s[i]=char(j+'a');
                i+=2;
                ch[j]--;
            }
        }
        return s;
    }
};