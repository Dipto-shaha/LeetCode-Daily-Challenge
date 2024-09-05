class Solution(object):
    def missingRolls(self, rolls, mean, n):
        sum_of_m = sum(rolls)
        total = mean * ( n + len(rolls))
        sum_of_n = total - sum_of_m
        temp = float(sum_of_n)/n
        if ( temp >6 or temp <1) :
            return []
        avg = int((sum_of_n/n))
        ans = [avg for _ in range(n)]
        sum_of_n -= avg*n
        i = 0
        while(sum_of_n):
            ans[i]+=1
            sum_of_n-=1
            i+=1
        return ans
            
        
        
        