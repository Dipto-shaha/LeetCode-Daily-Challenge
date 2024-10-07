class Solution(object):
    def minLength(self, s):
        item  = []
        for ch in s:
            if len(item) and item[-1]+ch in ["AB","CD"]:
                item.pop()
            else:
                item.append(ch)
        return len(item)
        