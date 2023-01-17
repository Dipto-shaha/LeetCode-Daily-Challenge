class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n0=0,n1=0,n=s.size()-1,i,ans=0;
        for(i=0;i<=n;i++)
        {
            if(s[i]=='1') n1++;
            else ans=min(ans+1,n1);
        }
        return ans;
    }
};