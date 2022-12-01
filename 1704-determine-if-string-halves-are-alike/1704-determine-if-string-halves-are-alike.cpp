class Solution {
public:
    bool halvesAreAlike(string s) {
        int i,n=s.size(),cnt=0;
        char c;
        for(i=0;i<n/2;i++)
        {
            c=s[i];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
                 cnt++;

        }
        for(i=n/2;i<n;i++)
        {
            c=s[i];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
                 cnt--;
        }
        if(cnt!=0) return false;
        return true;
    }
};