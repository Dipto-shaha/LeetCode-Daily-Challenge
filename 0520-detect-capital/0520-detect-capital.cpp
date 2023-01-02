class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt=0;
        for(auto u:word)
        {
            if(u>='A' && u<='Z') cnt++;
        }
        if(cnt==0 || cnt==word.size() ||(cnt==1 && word[0]>='A' && word[0]<='Z'))
            return true;
        else 
           return false;
    }
};