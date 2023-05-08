class Solution(object):
    def diagonalSum(self, mat):
        n=len(mat)
        m=len(mat[0])
        ans=0
        j,k=0,m-1
        for i in range(0,n,1):
            ans+=mat[i][j]
            ans+=mat[i][k]
            if j==k:
                ans-=mat[i][k]
            j+=1
            k-=1
        return ans
        