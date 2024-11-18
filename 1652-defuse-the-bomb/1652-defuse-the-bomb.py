class Solution(object):
    def decrypt(self, code, k):
        n = len(code)
        
        if k == 0:
            return [0 for _ in range(n)]
            
        
        for i in range(1,n):
            code[i]+=code[i-1]
            
        ans = []
        for i in range(n):
            if k > 0 :
                if i+k < n :
                    ans.append(code[i+k]-code[i])
                else: ans.append(code[n-1] - code[i] + code[i+k-n])
            else:
                if k*-1 <i:
                    ans.append(code[i-1]- code[i+k-1])
                else:
                    ans.append((code[i-1] if i-1 >= 0 else 0)-code[n-1-(k*-1)+i]+code[n-1])
                     
        return ans
                
            
        