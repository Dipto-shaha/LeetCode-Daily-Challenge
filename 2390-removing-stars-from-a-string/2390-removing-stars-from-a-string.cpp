class Solution {
public:
    string removeStars(string s) {
        int i=0;
        string ans="";
        for(auto u:s)
        {
            if(u=='*')
            {
                if(i>0) i--;
            }
            else s[i]=u,i++;
        }
        for(int j=0;j<i;j++)
        {
            ans+=s[j];
        }
        return ans;
    }
};