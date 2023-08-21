class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int i,j,k,n=s.size(),flag=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                k=i;
                while(k<n)
                {
                    j=0;
                    while(j<i && s[j]==s[k]) j++,k++;
                    if(j!=i) break;
                }
                if(k==n) return true;
            }
        }
        return false;
    }
};