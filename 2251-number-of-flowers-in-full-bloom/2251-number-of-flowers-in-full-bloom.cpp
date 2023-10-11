class Solution {
public:
    int bs(vector<int>&v,int t)
    {
        int li=0,hi=v.size()-1,mid,ans=0;
        while(li<=hi)
        {
            mid=(li+hi)/2;
            if(v[mid]<=t)
                ans=mid+1,li=mid+1;
            else hi=mid-1;
        }
        return ans;
    }
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int>st,l,ans;
        for(auto u:flowers)
        {
            st.push_back(u[0]);
            l.push_back(u[1]);
        }
        sort(st.begin(),st.end());
        sort(l.begin(),l.end());
        for(auto u:people)
        {
            ans.push_back(bs(st,u)-bs(l,u-1));
        }
        return ans;
        
    }
};