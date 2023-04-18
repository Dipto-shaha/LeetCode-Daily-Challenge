class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        ans="";
        n=min(len(word1),len(word2))
        for i in range(0,n,1):
            ans+=word1[i];
            ans+=word2[i];
        if len(word1)>n:
            for i in range(n,len(word1),1):
                ans+=word1[i];
        elif len(word2)>n:
            for i in range(n,len(word2),1):
                ans+=word2[i]; 
        return ans;
        