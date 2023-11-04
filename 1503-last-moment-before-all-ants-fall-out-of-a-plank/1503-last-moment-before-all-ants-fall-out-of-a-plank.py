class Solution(object):
    def getLastMoment(self, n, left, right):
        left.sort()
        right.sort()
        if len(left)==0:
            return n-right[0]
        elif len(right)==0:
            return left[len(left)-1]
        else:
            return max(left[len(left)-1],n-right[0])
        