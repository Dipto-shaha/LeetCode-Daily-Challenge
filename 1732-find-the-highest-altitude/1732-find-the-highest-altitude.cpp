class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0,sum=0;
        for(auto u:gain)
        {
            sum+=u;
            ans=max(ans,sum);
        }
        return ans;
    }
};