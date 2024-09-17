class Solution(object):
    def uncommonFromSentences(self, s1, s2):
        wordList = s1.split(' ')
        wordList.extend(s2.split(' '))
        
        cnt  = { }
        for word in wordList:
            if(not cnt.get(word)):
                cnt[word]=0
            cnt[word]+=1
            
        ans = []
        for item in cnt:
            if cnt[item]==1:
                ans.append(item)
        return ans
        