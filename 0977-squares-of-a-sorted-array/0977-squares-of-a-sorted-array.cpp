class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1,k;
        vector<int>ans(j+1);
        k=j;
        while(i<=j){
            if(nums[i]*nums[i] < nums[j]*nums[j])
                ans[k--]=nums[j]*nums[j],j--;
            else ans[k--]=nums[i]*nums[i],i++;
        }
        return ans;
        
    }
};