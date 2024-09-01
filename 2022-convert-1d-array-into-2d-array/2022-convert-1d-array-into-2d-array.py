class Solution(object):
    def construct2DArray(self, original, m, n):
        ans = []
        if len(original) != m*n:
            return ans
        start = 0
        while m:
            temp = original[start:(start+n)]
            m -= 1
            start += n
            ans.append(temp)
        return ans
        