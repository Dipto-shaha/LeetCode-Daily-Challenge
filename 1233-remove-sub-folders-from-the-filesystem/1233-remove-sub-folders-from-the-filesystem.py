class Solution(object):
    def removeSubfolders(self, folder):
        folder.sort()
        ans  = []
        n = len(folder)
        i = 0
        while i<n:
            ans.append(folder[i])
            j = i+1
            while j < n and folder[j].startswith(folder[i]+'/') :
                j+=1
            i= j
        return ans
            
        