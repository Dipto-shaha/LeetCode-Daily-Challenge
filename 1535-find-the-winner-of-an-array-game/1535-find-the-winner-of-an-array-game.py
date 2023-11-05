class Solution(object):
    def getWinner(self, arr, k):
        n=len(arr)
        if k>=n:
            return max(arr)
        cnt=0
        now=arr[0]
        for i in range(1,n):
            if cnt ==k:
                return now
            if arr[i]<now:
                cnt+=1
            else:
                cnt=1
                now=arr[i]
        return max(arr)
            
        