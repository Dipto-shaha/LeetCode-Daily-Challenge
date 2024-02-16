class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>m,cnt;
        int ans=0;
        for(auto u:arr)
        {
            m[u]++;
        }
        for(auto u:m)
        {
            cnt[u.second]++;
        }
        for(auto u:cnt)
        {
            auto [x,y]=u;
            while(y--)
            {
                k-=x;
                if(k<0) ans++;
            }
        }
        return ans;    
    }
};