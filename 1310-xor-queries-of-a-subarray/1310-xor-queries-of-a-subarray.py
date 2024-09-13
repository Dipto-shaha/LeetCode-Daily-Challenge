class Solution(object):
    def xorQueries(self, arr, queries):
        xorList = []
        temp  = 0
        for item in arr:
            temp = temp ^ item
            xorList.append(temp)
        
        ans = []
        for query in queries:
            if(query[0]==0):
                ans.append(xorList[query[1]])
            else:
                ans.append(xorList[query[1]]^xorList[query[0]-1])
        return ans
        
        