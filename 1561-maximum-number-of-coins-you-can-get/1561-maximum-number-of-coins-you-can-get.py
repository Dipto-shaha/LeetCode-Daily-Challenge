class Solution(object):
    def maxCoins(self, piles):
        piles.sort()
        piles.reverse()
        n = len(piles)/3
        ans = 0
        for i in range(1,len(piles),2):
            ans+=piles[i]
            n-=1
            if n==0:
                break
        return ans
        