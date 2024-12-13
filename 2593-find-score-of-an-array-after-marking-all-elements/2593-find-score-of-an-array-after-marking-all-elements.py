class Solution(object):
    def findScore(self, nums):
        hashMap = {}
        for i in range(len(nums)):
            if nums[i] not in hashMap:
                  hashMap[nums[i]] = [] 
            hashMap[nums[i]].append(i) 
        
        ans = 0
        sorted_nums= sorted(set(nums))
        for key in sorted_nums:
            for item in hashMap[key]:
                if nums[item]:
                    ans+=key
                    nums[item] = 0
                    if item-1>=0 :
                        nums[item-1] = 0
                    if item+1< len(nums):
                        nums[item+1] = 0
        return ans
        