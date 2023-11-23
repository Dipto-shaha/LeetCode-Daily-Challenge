class Solution(object):
    def checkArithmeticSubarrays(self, nums, l, r):
        n = len(l)
        ans = []
        for i in range(n):
            num = nums[l[i]:r[i]+1]
            num.sort()
            temp=num[1]-num[0]
            flag=True
            j=1
            while j<len(num):
                if temp==num[j]-num[j-1]:
                    j+=1
                else:
                    flag=False
                    break
            ans.append(flag)
        return ans
        