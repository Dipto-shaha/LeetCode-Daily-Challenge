class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i,n=colors.size(),ans=0,val=neededTime[0];
        for(i=1;i<n;i++)
        {
            if(colors[i]==colors[i-1])
            {
                ans+=min(val,neededTime[i]);
                val=max(val,neededTime[i]);
            }
            else val=neededTime[i];
        }
        return ans;
    }
};