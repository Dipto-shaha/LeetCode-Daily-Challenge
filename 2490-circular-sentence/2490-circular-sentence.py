class Solution(object):
    def isCircularSentence(self, sentence):
        words =  sentence.split(" ")
        for i in range(1,len(words)):
            if words[i][0] == words[i-1][-1]:
                continue
            else:
                return False
        return words[-1][-1] == words[0][0]
        