class Solution(object):
    def buildArray(self, target, n):
        st = []
        ans = []
        i=1
        for x in target:
            while x!=i:
                ans.append("Push")
                ans.append("Pop")
                i+=1
            if x==i:
                ans.append("Push")
            i+=1
        return ans
        