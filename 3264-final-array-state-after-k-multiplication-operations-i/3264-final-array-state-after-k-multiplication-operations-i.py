class Solution(object):
    def getFinalState(self, nums, k, multiplier):
        n =  len(nums)
        while k>0:
            pos = 0
            value = 1000000
            for i in range(n):
                if nums[i] < value:
                    value =nums[i]
                    pos = i
            nums[pos] *= multiplier
            k-=1
        return nums
        