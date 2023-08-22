class Solution {
public:
    string convertToTitle(int n) {
        string ans="";
        int temp,cnt;
        while(n>0)
        {
            
            if(n<=26)
            {
                ans+=char(n-1+'A');
                break;
            }
            else
            {
                temp=n;
                cnt=0;
                while(n>26)
                {
                    if(n%26)
                      n=n/26;
                    else n=n/26-1;
                    cnt++;
                }
                ans+=char(n-1+'A');
                n=temp-n*(pow(26,cnt));
            }
        }
        return ans;
    }
};