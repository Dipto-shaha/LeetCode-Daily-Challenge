class Solution {
public:
    string frequencySort(string s) {
        vector<int>cnt(62,0);
        int i,mx,pos;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]>='A' && s[i]<='Z') 
                cnt[s[i]-'A'+26]++;
            else if(s[i]>='0' && s[i]<='9')
                cnt[s[i]-'0'+52]++;
            else
              cnt[s[i]-'a']++;
        }
        s="";
        while(1)
        {
            mx=0,pos=-1;
            for(i=0;i<=61;i++)
            {
                if(cnt[i]>mx)
                {
                    pos=i;
                    mx=cnt[i];
                }
            }
            if(pos!=-1)
            {
                while(cnt[pos])
                {
                    if(pos>51)
                        s+=pos-52+'0';
                    else if(pos>25)
                        s+=pos+'A'-26;
                    else
                        s+=pos+'a'; 
                    cnt[pos]--;
                }
            }
            else break;
        }
        return s;
    }
};