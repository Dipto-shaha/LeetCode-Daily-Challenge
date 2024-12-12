class Solution(object):
    def pickGifts(self, gifts, k):
        while k>0:
            gifts = sorted(gifts)
            gifts[-1] = int(floor(sqrt(gifts[-1])))
            k-=1
        return sum(gifts)
        