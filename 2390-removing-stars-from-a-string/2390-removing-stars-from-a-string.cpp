class Solution {
public:
    string removeStars(string s) {
        int i=0;
        for(auto u:s)
        {
            if(u=='*')
            {
                if(i>0) i--;
            }
            else s[i]=u,i++;
        }
        return s.substr(0,i);
    }
};