class Solution(object):
    def numIdenticalPairs(self, nums):
        cnt=0
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if i!=j and nums[i]==nums[j]:
                    cnt+=1
        return cnt
        