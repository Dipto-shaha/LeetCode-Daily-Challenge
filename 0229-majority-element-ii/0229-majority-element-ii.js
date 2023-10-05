/**
 * @param {number[]} nums
 * @return {number[]}
 */
var majorityElement = function(nums) {
    nums.sort()
    let i,n=nums.length
    let cnt=1,r=n/3
    //if(r<1) return nums
    let ans =[];
    for(i=1;i<n;i++)
    {
         if(nums[i]==nums[i-1])
             cnt++;
          else 
          {
             if(cnt>r)
                  ans.push(nums[i-1])
             cnt=1;
          }
    }
    if(cnt>r)
        ans.push(nums[n-1])
    return ans;
    
};