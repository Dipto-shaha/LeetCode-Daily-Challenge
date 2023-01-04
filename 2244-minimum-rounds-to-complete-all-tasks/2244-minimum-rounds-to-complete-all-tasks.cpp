class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>m;
        int ans=0;
        for(int x:tasks)
        {
            m[x]++;
        }
        for(auto u:m)
        {
           if(u.second==1)
           {
               ans=-1;
               break;
           }
           ans+=(u.second+2)/3;
        }
        return ans;
    }
};