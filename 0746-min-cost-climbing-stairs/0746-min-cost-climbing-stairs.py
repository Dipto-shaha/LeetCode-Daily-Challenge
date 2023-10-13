def fun(dp,i,cost):
    if(i>=len(cost)):
        return 0
    if(dp[i]!=-1):
        return dp[i]
    dp[i]=cost[i]+min(fun(dp,i+1,cost),fun(dp,i+2,cost))
    return dp[i]
class Solution(object):
    def minCostClimbingStairs(self, cost):
        dp = [-1 for i in range(len(cost))]
        #print(dp)
        return min( fun(dp,0,cost), fun(dp,1,cost))
        