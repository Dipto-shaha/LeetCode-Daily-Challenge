class Solution(object):
    def longestCommonPrefix(self, arr1, arr2):
        hashMap = {}
        for num in arr1:
            s  = str(num)
            for i in range(len(s)):
                hashMap[s[0:i+1]]=1
        ans = 0
        for num in arr2:
            s  = str(num)
            for i in range(len(s)):
                if(hashMap.get(s[0:i+1])):
                    ans =max(ans,i+1)
                else:
                    break
        return ans