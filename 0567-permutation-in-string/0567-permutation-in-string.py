class Solution(object):
    def checkInclusion(self, s1, s2):
        hashMap = {chr(ch): 0 for ch in range(ord('a'), ord('z') + 1)}
        for ch in s1:
            hashMap[ch]+=1
        last = -1
        temp = hashMap.copy()
        for i,ch in enumerate(s2):
            if temp[ch]>=1:
                temp[ch]-=1
                if last ==-1:
                    last=i
            else:
                if ch not in s1:
                    last=-1
                    temp=hashMap.copy()
                elif last!=-1:
                    while temp[ch]<=0:
                        temp[s2[last]]+=1
                        last+=1
                    temp[ch]-=1
                    
            if last!=-1 and (i-last+1)==len(s1):
                return True
        return False
        