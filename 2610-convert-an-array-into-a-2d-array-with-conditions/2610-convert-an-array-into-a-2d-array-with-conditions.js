/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var findMatrix = function(nums) {
    var cnt = new Array(nums.length+1).fill(0);
    var ans =[],mx=0;
    for(num of nums)
    {
        cnt[num]++;
        if(mx<cnt[num])
        {
            ans.push([num]);
            mx=cnt[num]
        }
        else ans[cnt[num]-1].push(num);
    }
    return ans;
};