class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int mx=0,ans=0,fq[101]={0};
        for(auto u:nums){
            fq[u]++;
            mx=max(mx,fq[u]);
        }
        for(auto u:fq){
            if(u==mx) ans++;
        }
        return ans*mx;
    }
};