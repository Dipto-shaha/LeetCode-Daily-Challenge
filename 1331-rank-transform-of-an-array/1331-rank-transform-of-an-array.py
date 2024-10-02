class Solution(object):
    def arrayRankTransform(self, arr):
        hashMap = {}
        temp = arr[:]
        temp.sort()
        cnt = 0
        prev = None
        for i, item in enumerate(temp):
            if prev!= item:
                cnt+=1
            hashMap[item] = cnt
            prev = item
            
        for i,item in enumerate(arr):
            arr[i] = hashMap[item]
        return arr
            
        
        