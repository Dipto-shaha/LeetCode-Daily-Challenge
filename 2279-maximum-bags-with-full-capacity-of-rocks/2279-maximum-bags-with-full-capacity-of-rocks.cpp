class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int i,n=capacity.size(),ans=0;
        for(i=0;i<n;i++)
        {
            capacity[i]=capacity[i]-rocks[i];
        }
        sort(capacity.begin(),capacity.end());
        for(i=0;i<n;i++)
        {
            if(!capacity[i]) ans++;
            else if(capacity[i]<=additionalRocks) ans++,additionalRocks-=capacity[i];
        }
        return ans;
    }
};