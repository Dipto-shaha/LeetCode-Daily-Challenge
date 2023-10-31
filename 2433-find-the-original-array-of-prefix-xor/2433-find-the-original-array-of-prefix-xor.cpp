class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int i=0,n=0,ans;
        for(auto u:pref) 
        {
            if(n==0) n=u;
            else
            {
                ans=u^n;
                n=pref[i];
                pref[i]=ans;
            }
            i++;
        }
        return pref;
    }
};