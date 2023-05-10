class Solution(object):
    def generateMatrix(self, n):
        row=n
        col=n
        cnt=row*col
        ans = [[0 for i in range(col)] for j in range(row)]
        startR=0
        startC=0
        val=int(1)
        while cnt>0:
            i=startR
            for j in range(startC,col,1):
                ans[i][j]=val
                val+=1
                cnt-=1
            j=col-1
        
            for i in range(startR+1,row,1):
                ans[i][j]=val
                val+=1
                cnt-=1
            i=row-1
            for j in range(col-2,startC-1,-1):
                ans[i][j]=val
                val+=1
                cnt-=1
            j=startC
            for i in range(row-2,startR,-1):
                ans[i][j]=val
                val+=1
                cnt-=1    
            startR+=1
            startC+=1
            row-=1
            col-=1
        return ans
        