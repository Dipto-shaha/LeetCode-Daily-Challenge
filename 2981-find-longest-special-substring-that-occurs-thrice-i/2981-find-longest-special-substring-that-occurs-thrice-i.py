class Solution(object):
    def findMaxLength(self,items):
        li = 1
        hi = max(items)
        ans = -1
        while li<=hi:
            mid = (li+hi)/2
            cnt = 0
            
            for item in items:
                if item>=mid:
                    cnt+=(item-mid+1)
            if cnt>=3:
                ans = max(ans,mid)
                li = mid+1
            else:
                hi = mid-1
        return ans
                
            
    def maximumLength(self, s):
        freq = [ [] for _ in range(26)]
        n = len(s)
        i = 0
        while i<n:
            cnt = 1
            while i+1<n and s[i]==s[i+1]:
                cnt+=1
                i+=1
            freq[ord(s[i])-97].append(cnt)
            i+=1
        ans = -1
        for i in range(26):
            if len(freq[i]):
                ans = max(ans, self.findMaxLength(freq[i]))
        return ans