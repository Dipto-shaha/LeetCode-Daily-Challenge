class Solution(object):
    def maxMoves(self, grid):
        hashMap = {}
        def visitGrid(grid, i,j):
            if j+1 == len(grid[0]):
                return 0
            if (i,j) in hashMap:
                return hashMap[(i,j)]
            
            ans = 0
            if i-1 >=0 and grid[i-1][j+1]> grid[i][j]:
                ans = 1+visitGrid(grid,i-1,j+1)
            if grid[i][j+1]> grid[i][j]:
                ans = max(ans,1+visitGrid(grid,i,j+1))
            if i+1 < len(grid) and grid[i+1][j+1]> grid[i][j]:
                ans = max(ans,1+visitGrid(grid,i+1,j+1))
            hashMap[(i,j)]=ans
            return ans
        
        ans = 0
        for i in range(len(grid)):
            ans = max(ans, visitGrid(grid,i,0))
        return ans
        