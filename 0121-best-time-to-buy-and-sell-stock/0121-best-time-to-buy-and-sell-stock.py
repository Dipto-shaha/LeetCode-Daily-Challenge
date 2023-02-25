class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        ans=0
        mn=prices[0]
        for x in prices:
           mn=min(mn,x)
           ans=max(ans,x-mn)
        return ans;
        