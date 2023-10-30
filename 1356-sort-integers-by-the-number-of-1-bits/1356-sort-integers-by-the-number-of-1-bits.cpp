class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>v;
        int cnt,temp,i,n=arr.size();
        for(auto u:arr)
        {
            cnt=0;
            temp=u;
            while(u)
            {
                if(u&1) cnt++;
                u/=2;
            }
            v.push_back({cnt,temp});
        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i++)
        {
            arr[i]=v[i].second;
        }
        return arr;
    }
};