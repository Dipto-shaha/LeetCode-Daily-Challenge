class Solution {
public:
    int BS(vector<int>& nums,int val)
    {
        int li=0,hi=nums.size()-1,mid,ans=-1;
        while(li<=hi)
        {
            mid=(li+hi)/2;
            if(nums[mid]<=val)
                ans=mid,li=mid+1;
            else hi=mid-1;
        }
        if(ans==-1) ans=0;
        else ans++;
        return ans;
    }
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int i,n=nums.size();
        for(i=1;i<n;i++)
        {
            nums[i]+=nums[i-1];
        }
        vector<int>ans;
        n=queries.size();
        for(i=0;i<n;i++)
        {
            ans.push_back(BS(nums,queries[i]));
        }
        return ans;
    }
};