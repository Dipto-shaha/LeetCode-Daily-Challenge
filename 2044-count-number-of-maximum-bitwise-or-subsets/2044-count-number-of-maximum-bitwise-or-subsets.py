class Solution(object):
    def countMaxOrSubsets(self, nums):
        mx = 0
        for num in nums:
            mx = mx | num
        ans = 0
        
        
        for pattern in range(1,2**len(nums)):
            value = 0
            for i in range(len(nums)):
                if pattern & (1<<i) :
                    value = value | nums[i]
            
            if value == mx:
                ans+=1
        
        return ans
                
        