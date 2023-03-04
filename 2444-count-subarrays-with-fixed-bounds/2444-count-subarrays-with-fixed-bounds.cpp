class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int mnStart=-1,mxStart=-1,start=0,i,n=nums.size();
        long long ans=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]<minK || nums[i]>maxK)
            {
                start=i+1;
                mnStart=-1;
                mxStart=-1;
            }
            if(minK==nums[i]) mnStart=i;
            if(maxK==nums[i]) mxStart=i;
            if(mnStart!=-1 && mxStart!=-1)
                ans+=(min(mnStart,mxStart)-start+1);
        }
        return ans;
    }
};