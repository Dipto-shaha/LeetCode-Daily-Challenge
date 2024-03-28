class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int>cnt;
        int ans=0,i,n=nums.size(),start=0;
        for(i=0;i<n;i++){
            cnt[nums[i]]++;
            if(cnt[nums[i]]<=k){
                ans=max(i-start+1,ans);
            }
            else{
                while(cnt[nums[i]]>k){
                    cnt[nums[start]]--;
                    start++;
                }
            }
        }
        return ans;
        
    }
};