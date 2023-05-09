class Solution(object):
    def spiralOrder(self, matrix):
        row=len(matrix)
        col=len(matrix[0])
        ans=[]
        cnt=row*col
        startR=0
        startC=0
        while cnt>0:
            i=startR
            for j in range(startC,col,1):
                ans.append(matrix[i][j])
                cnt-=1
            j=col-1
            if cnt==0:
                break
            for i in range(startR+1,row,1):
                ans.append(matrix[i][j])
                cnt-=1
            i=row-1
            if cnt==0:
                break
            for j in range(col-2,startC-1,-1):
                ans.append(matrix[i][j])
                cnt-=1
            j=startC
            if cnt==0:
                break
            for i in range(row-2,startR,-1):
                ans.append(matrix[i][j])
                cnt-=1
            if cnt==0:
                break    
            startR+=1
            startC+=1
            row-=1
            col-=1
        return ans
            