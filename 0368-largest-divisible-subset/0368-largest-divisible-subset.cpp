class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int index=-1,i,j,n=nums.size(),mx=0;
        int cnt[n],parent[n];
        for(i=0;i<n;i++)
        {
            cnt[i]=1;
            parent[i]=-1;
            for(j=i-1;j>=0;j--)
            {
                if(nums[i]%nums[j]==0)
                {
                   if(cnt[j]+1>cnt[i])
                   {
                       parent[i]=j;
                       cnt[i]=cnt[j]+1;
                   }
                }
            }
            if(cnt[i]>mx)
                mx=cnt[i],index=i;
        }
        vector<int>ans;
        while(index!=-1)
        {
            ans.push_back(nums[index]);
            index=parent[index];
        }
        return ans;
    }
};