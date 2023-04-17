class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        mx=0
        for x in candies:
            mx=max(x,mx)
        ans =[]
        for x in candies:
            if x+ extraCandies>=mx:
                ans.append(True)
            else:
                ans.append(False)
        return ans
                
            
        
        