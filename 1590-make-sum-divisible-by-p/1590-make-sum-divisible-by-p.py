class Solution(object):
    def minSubarray(self, nums, p):
        target = sum(nums)%p
        if target ==0:
            return 0
        n = len(nums)
        ans =  n
        hashMap = {0:-1}
        prefix_sum = 0
        for start in range(n):
            prefix_sum =(prefix_sum+nums[start])%p
            
            need = (prefix_sum-target+p)%p
            
            if need in hashMap:
                ans=  min(ans, start-hashMap[need])
                
            hashMap[prefix_sum]= start
            
        return -1 if ans == n else ans
            
        