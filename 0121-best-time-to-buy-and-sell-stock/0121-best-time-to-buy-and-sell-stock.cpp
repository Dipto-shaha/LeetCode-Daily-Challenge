class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,mn=INT_MAX;
        for(int x:prices)
        {
            mn=min(x,mn);
            ans=max(ans,x-mn);
        }
        return ans;
    }
};