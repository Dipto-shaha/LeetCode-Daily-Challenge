class Solution {
public:
    string reverseWords(string s) {
        string ans="",temp="";
        int i,n=s.size();
        for(i=n-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                if(ans=="")
                    ans=temp;
                else
                ans=temp+" "+ans;
                temp="";
            }
            else temp+=s[i];
        }
        if(temp!=""){
            if(ans=="")
                ans=temp;
            else
                ans=temp+" "+ans;
        }
        return ans;
    }
};