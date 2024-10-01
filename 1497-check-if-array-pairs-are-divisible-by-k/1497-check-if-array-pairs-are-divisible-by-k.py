class Solution(object):
    def canArrange(self, arr, k):
        cnt = {}
        for i in range(k):
            cnt[i] = 0
        for item in arr:
            temp = (item%k +k )%k
            cnt[temp]+=1
            
            
        if cnt[0]%2!=0:
            return False
        for i in range(1,k):   
            if cnt[i]!=cnt[k-i]:
                return False
        return True
        