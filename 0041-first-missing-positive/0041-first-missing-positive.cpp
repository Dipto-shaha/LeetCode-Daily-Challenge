class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         int i,n=nums.size(),temp,another,cnt=0;
         nums.push_back(-1);
         for(i=0;i<n;i++){
             if(nums[i]>n || nums[i]<=0)
             {
                 nums[i]=-1;
             }
         }
         for(i=0;i<n;i++){
             if(nums[i]<=0) continue;
             temp=nums[i];
             while(temp>0 && temp<=n){
                 another=nums[temp];
                 nums[temp]=0;
                 temp=another;
             }
         }
        for(i=1;i<=n;i++)
        {
            //cout<<nums[i]<<" ";
            if(nums[i]!=0) return i;
        }
        return n+1;
    }
};