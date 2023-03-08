class Solution(object):
    def minEatingSpeed(self, piles, h):
        """
        :type piles: List[int]
        :type h: int
        :rtype: int
        """
        li=int(1)
        hi=int( 1e10)
        ans=int(hi)
        mid,cnt=1,0
        while li<=hi:
            mid=(li+hi)/2;
            cnt=0
            for x in piles:
                cnt+=(x+mid-1)/mid
            if cnt<=h:
                ans=mid
                hi=mid-1
            elif cnt>h:
                li=mid+1         
        return ans;