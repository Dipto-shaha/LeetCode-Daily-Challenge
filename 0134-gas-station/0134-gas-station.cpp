class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans=0,pos=0,i,n=cost.size(),temp=0;
        for(i=0;i<n;i++)
        {
            ans+=gas[i]-cost[i];
            temp+=gas[i]-cost[i];
            if(temp<0) pos=i+1,temp=0;
        }
        if(ans>=0) return pos;
        return -1;
    }
};