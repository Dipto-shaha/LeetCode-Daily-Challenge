class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>>v;
        int i,n=nums1.size();
        long long ans=0,cnt=0;
        for(i=0;i<n;i++)
        {
            v.push_back({nums2[i],nums1[i]});
        }
        sort(v.begin(),v.end());
        priority_queue<int>q;
        for(i=n-1;i>=0;i--)
        {
            cnt+=v[i].second;
            q.push(-1*v[i].second);
            if(n-i<k) continue;
            ans=max(ans,v[i].first*cnt);
            cnt+=q.top();
            q.pop();
        }
        return ans;
    }
};