class Solution(object):
    def isPrefixOfWord(self, sentence, searchWord):
        words  = sentence.split(" ")
        for i in range(len(words)):
            word = words[i]
            if word.startswith(searchWord):
                return i+1
        return -1
        