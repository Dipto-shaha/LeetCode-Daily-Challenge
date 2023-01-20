class Solution {
public:
    set<vector<int>>ans;
    vector<int>temp;
    void fun(vector<int>&nums,int i,int last)
    {
        if(i>=nums.size()) {
        if(temp.size()>=2)
           ans.insert(temp);
            return;
        }
        if(nums[i]>=last) 
        {
            temp.push_back(nums[i]);
            fun(nums,i+1,nums[i]);
            temp.pop_back();
        }
        fun(nums,i+1,last);

    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        fun(nums,0,-101);
        return vector(ans.begin(),ans.end());
    } 
};