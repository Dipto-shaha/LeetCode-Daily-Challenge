class Solution {
public:
    bool vowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' );
    }
    bool halvesAreAlike(string s) {
        int i,n=s.size(),cnt=0;
        for(i=0;i<n/2;i++)
        {
            if(vowel(s[i]))
                 cnt++;
        }
        for(i=n/2;i<n;i++)
        {
            if(vowel(s[i]))
                 cnt--;
        }
        return cnt==0;
    }
};