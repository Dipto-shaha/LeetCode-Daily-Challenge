class Solution(object):
    def findKthPositive(self, arr, k):
        """
        :type arr: List[int]
        :type k: int
        :rtype: int
        """
        j = 0 
        cnt = 1
        for i in range(1,2001,1):
            if j<len(arr) and arr[j]==i:
                j=j+1
            elif cnt==k:
                return i
            else:
                cnt+=1
        return i
            
        