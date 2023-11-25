class Solution(object):
    def getSumAbsoluteDifferences(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans = []
        total = sum(nums)
        current = 0
        n =len(nums)
        for i in range(n):
            current+=nums[i]
            ans.append(nums[i]*(2*i+2-n)+total-2*current)
            
        return ans
            
                
                
        
            
        