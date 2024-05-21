class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int i,n=nums.size(),j;
        vector<vector<int>>ans;
        ans.push_back({});
        for(i=1;i<(1<<n);i++){
            vector<int>temp;
            for(j=0;j<n;j++){
                if(i & (1<<j)) temp.push_back(nums[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};