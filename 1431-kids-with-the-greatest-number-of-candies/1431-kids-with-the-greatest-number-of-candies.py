class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        mx=max(candies)
        ans =[]
        for x in candies:
            if x+ extraCandies>=mx:
                ans.append(True)
            else:
                ans.append(False)
        return ans
                
            
        
        