class Solution(object):
    def longestSubarray(self, nums):
        mx = max(nums)
        ans  = 0
        cnt = 1
        for i in range(1,len(nums)):
            if nums[i-1]==nums[i] and nums[i]==mx:
                cnt+=1
            else:
                ans =max(ans,cnt)
                cnt = 1
        
        return max(ans,cnt)
        