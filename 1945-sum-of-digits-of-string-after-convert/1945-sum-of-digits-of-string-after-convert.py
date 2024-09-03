class Solution(object):
    def getLucky(self, s, k):
        ans = 0
        for ch in s:
            temp=ord(ch)-96
            while(temp):
                ans += temp%10
                temp/=10
        k-=1
        while k:
            temp=ans
            ans=0
            while temp:
                ans+=temp%10
                temp/=10
            k-=1
        return ans
        
            
            
        