class Solution(object):
    def average(self, salary):
        """
        :type salary: List[int]
        :rtype: float
        """
        ans = 0.0
        for x in salary:
            ans+=x
        ans-=max(salary)
        ans-=min(salary)
        ans=float(ans/(len(salary)-2))
        return ans
        