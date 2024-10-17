class Solution(object):
    def maximumSwap(self, num):
        s = str(num)
        for i in range(len(s)):
            pos = -1
            mx = s[i]
            for j in range(i+1,len(s)):
                if s[j] >= mx  :
                    mx = s[j]
                    pos = j
            if pos!=-1 and s[i]<mx:
                ans  = s[:i] + s[pos] + s[i+1:pos] +s[i]+s[pos+1:]
                return int(ans)
        return num