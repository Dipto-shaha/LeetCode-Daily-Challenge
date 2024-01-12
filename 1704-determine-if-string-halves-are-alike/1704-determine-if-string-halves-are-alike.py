class Solution(object):
    def halvesAreAlike(self, s):
        vowels = ['a','e','i','o','u','A','E','I','O','U']
        cnt= 0
        n=len(s)
        for i in range(n):
            if(i>=(n/2)):
                 if s[i] in vowels:
                        cnt-=1
            else:
                if s[i] in vowels:
                        cnt+=1
        return cnt==0
        