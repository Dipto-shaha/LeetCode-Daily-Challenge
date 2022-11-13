class Solution {
public:
    string reverseWords(string s) {
        int flag=0,i,n=s.size();
        vector<string>v;
        string ss="";
        for(i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                if(flag)
                    v.push_back(ss);
                ss="";
                flag=0;
            }
            else ss+=s[i],flag=1;
        }
        if(flag) v.push_back(ss);
        s="";
        n=v.size();
        for(i=n-1;i>=0;i--)
        {
            s+=v[i];
            if(i) s+=" ";
        }
        return s;
    }
};