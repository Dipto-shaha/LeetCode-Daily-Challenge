class Solution(object):
    def maxVowels(self, s, k):
        n=len(s)
        a=[None]*(n+1)
        a[0]=0
        ans=0
        for i in range(0,n):
            if s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' :
                    a[i+1]=a[i]+1
            else: a[i+1]=a[i]
            if i+1>=k:
                ans=max(ans,a[i+1]-a[i+1-k])
        return ans
            
        