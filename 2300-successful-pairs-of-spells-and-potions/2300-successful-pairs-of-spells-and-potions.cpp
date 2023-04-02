class Solution {
public:
    int search(vector<int>& nums,int val, long long target) {
        int li=0,hi=nums.size()-1,mid,ans=nums.size();
        while(li<=hi)
        {
            mid=(li+hi)/2;
            if(nums[mid]*1LL*val>=target)
            {
                ans=mid;
                hi=mid-1;
            }
            else  li=mid+1;
        }
        return ans;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size(),m=potions.size(),i;
        vector<int>ans;
        sort(potions.begin(),potions.end());
        for(i=0;i<n;i++)
        {
            if(spells[i]>=success) 
                ans.push_back(m);
            else
                ans.push_back(m-search(potions,spells[i],success));
        }
        return ans;
    }
};