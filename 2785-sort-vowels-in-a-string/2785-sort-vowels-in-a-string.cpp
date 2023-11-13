class Solution {
public:
    string sortVowels(string s) {
        vector<char>ch;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u' ||
               s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='I' || s[i]=='U' )
            {
                 ch.push_back(s[i]);
                s[i]='#';
                
            }
        }
        sort(ch.begin(),ch.end());
        int k =  0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='#' )
                s[i]=ch[k++];
        }
        return s;
    }
};