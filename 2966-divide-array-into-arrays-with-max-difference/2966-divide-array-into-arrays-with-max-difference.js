/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[][]}
 */
var divideArray = function(nums, k) {
    nums.sort((a,b)=>a-b);
    var ans = []
    for(var i=0;i<nums.length;i+=3)
    {
        if(nums[i+2]-nums[i]<=k)
            ans.push([nums[i+2],nums[i],nums[i+1]]);
        else return  [];
    }
    return ans;
};