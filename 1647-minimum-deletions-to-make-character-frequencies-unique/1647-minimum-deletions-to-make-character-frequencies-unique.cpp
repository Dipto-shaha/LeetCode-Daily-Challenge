class Solution {
public:
    int minDeletions(string s) {
        vector<int>f(26,0);
        for(auto u:s)
        {
            f[u-'a']++;
        }
        sort(f.begin(),f.end());
        set<int>st;
        int ans=0,i;
        for(i=25;i>=0;i--)
        {
            if(!f[i]) continue;
            while(st.find(f[i])!=st.end())
            {
                f[i]--;
                ans++;
            }
            if(!f[i]) continue;
            st.insert(f[i]);
        }
        return ans;
    }
};