class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int mx=0,ans=0,fq[101]={0};
        for(auto u:nums){
            fq[u]++;
            if(mx<fq[u]){
                ans=1;
                mx=fq[u];
            }
            else if(mx==fq[u]) ans++;
        }
        return ans*mx;
    }
};