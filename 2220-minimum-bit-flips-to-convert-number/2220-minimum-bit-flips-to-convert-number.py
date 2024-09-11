class Solution(object):
    def minBitFlips(self, start, goal):
        ans  = 0
        while start>0 or goal>0:
            if((start&1)!=(goal&1)):
                ans+=1
            start = start>>1
            goal = goal>>1
        return ans
        