class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size()-1,m=needle.size()-1,i,j,k;
        for(i=0;i<=n-m;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(haystack[j+i]==needle[j])
                    continue;
                else break;
            }
            if(j==m+1) return i;
        }
        return -1;
    }
};