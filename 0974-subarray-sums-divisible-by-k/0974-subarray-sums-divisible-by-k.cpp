class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int n=nums.size(),i,mod=0,ans=0;
        m[0]=1;
        for(i=0;i<n;i++){
            mod=(mod + nums[i]%k+k)%k;
            ans+=m[mod];
            m[mod]++;
        }
        return ans;
    }
};