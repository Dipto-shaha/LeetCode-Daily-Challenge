class Solution {
public:
    bool wordPattern(string s, string pattern) {
        pattern+=" ";
        int n=pattern.size(),i,cnt=0;
        string ss="";
        map<char ,string>m;
        map<string,char>r;
        for(i=0;i<n;i++)
        {
            if(pattern[i]==' ')
            {
                
                if(m[s[cnt]]!="" && m[s[cnt]]!=ss )
                   return false;
                else if(r[ss]!='\0' && r[ss]!=s[cnt])
                    return false;
                else 
                  m[s[cnt]]=ss;
                  r[ss]=s[cnt];
                ss="";
                cnt++;
            }
            else 
            {
                ss+=pattern[i];
            }
        }
        if(cnt==s.size())
          return true;
        return false;
    }
};