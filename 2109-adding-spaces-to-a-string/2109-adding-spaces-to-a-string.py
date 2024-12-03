class Solution(object):
    def addSpaces(self, s, spaces):
        ans = []
        ans.append(s[0:spaces[0]])
        for i in range(1,len(spaces)):
            ans.append(s[spaces[i-1]:spaces[i]])
        ans.append(s[spaces[-1]:])
        return ' '.join(ans)
        