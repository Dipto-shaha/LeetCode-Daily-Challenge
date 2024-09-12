class Solution(object):
    def countConsistentStrings(self, allowed, words):
        hashMap = {}
        for ch in allowed:
            hashMap[ch]=1
        ans = 0
        for word in words:
            flag = True
            for ch in word:
                if hashMap.get(ch)!=1:
                    flag = False
                    break
                    
            if flag:
                ans+=1
        return ans
                
        