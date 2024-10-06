class Solution(object):
    def areSentencesSimilar(self, sentence1, sentence2):
        word1 = sentence1.split(" ")
        word2 = sentence2.split(" ")
        hashMap = {}
        if len(word1) > len(word2):
            word1, word2 = word2, word1
        while word1:
            if word1[0]==word2[0]:
                word1.pop(0)
                word2.pop(0)
            elif word1[-1]==word2[-1]:
                word1.pop()
                word2.pop()
            else:
                return False
        return True         
                

        
            
            
        
        