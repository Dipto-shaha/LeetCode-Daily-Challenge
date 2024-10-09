class Solution(object):
    def minAddToMakeValid(self, s):
        bra = []
        ans  = 0
        for ch in s:
            if ch =="(" :
                bra.append('(')
            else:
                if len(bra)>0:
                    bra.pop()
                else:
                    ans+=1
        return ans + len(bra)
                    
                    
                
        