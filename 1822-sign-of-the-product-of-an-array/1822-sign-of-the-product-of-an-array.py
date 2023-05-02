class Solution(object):
    def arraySign(self, nums):
        num=1
        for x in nums:
            num*=x
        if num==0:
            return 0
        elif num>0:
            return 1
        else: return -1
        