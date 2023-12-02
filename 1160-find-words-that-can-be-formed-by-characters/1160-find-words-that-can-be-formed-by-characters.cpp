class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int>v(26,0),temp;
        int ans=0,cnt;
        for(auto u:chars)
        {
            v[u-'a']++;
        }
        for(auto u:words)
        {
            cnt=0;
            temp=v;
            for(auto s:u)
            {
                v[s-'a']--;
                if(v[s-'a']<0)
                {
                    cnt=0;
                    break;
                }
                cnt++;
            }
            v=temp;
            ans+=cnt;
        }
        return ans;
    }
};