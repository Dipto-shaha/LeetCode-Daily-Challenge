class Solution(object):
    def maxCount(self, banned, n, maxSum):
        setOfBan = set(banned)
        ans = 0
        mxTotal = 0
        for i in range(1,n+1):
            if mxTotal+i > maxSum :
                break
            if not i in setOfBan:
                setOfBan.add(i)
                ans+=1
                mxTotal +=i
        return ans