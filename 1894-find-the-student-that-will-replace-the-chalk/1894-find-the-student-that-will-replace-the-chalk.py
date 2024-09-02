class Solution(object):
    def chalkReplacer(self, chalk, k):
        sum = 0
        preFixSum = []
        for item in chalk:
            sum +=item
            preFixSum.append(sum)
        k = k % sum
        for i in range(len(preFixSum)):
            if(preFixSum[i]>k):
                return i
            
        return 0
            
        
        