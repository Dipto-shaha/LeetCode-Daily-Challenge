class Solution(object):
    def countHomogenous(self, s):
        ans=0
        cnt=1
        mod=1e9+7
        for i in range(len(s)-1):
            if s[i]==s[i+1]:
                cnt+=1
            else:
                cnt=(cnt*(cnt+1)/2)%mod
                ans=(ans+cnt)%mod
                cnt=1
        cnt=(cnt*(cnt+1)/2)%mod
        ans=(ans+cnt)%mod
        return int(ans)