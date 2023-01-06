class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0,sum=0;
        for(int x:costs)
        {
            sum+=x;
            if(sum<=coins) ans++;
            else break;
        }
        return ans;
    }
};