class Solution {
public:
    
    int fun(vector<vector<int>>&grid,int i,int j){
         if(i<0 || i>=grid.size()|| j<0 || j>=grid[0].size() || grid[i][j]==0)
             return 1;
         if(grid[i][j]==2) return 0;
         grid[i][j]=2;
         int ans=0;
         ans+=fun(grid,i+1,j);
         ans+=fun(grid,i-1,j);
         ans+=fun(grid,i,j-1);
         ans+=fun(grid,i,j+1);
         return ans;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int i,j;
        for(i=0;i<grid.size();i++){
            for(j=0;j<grid[i].size();j++){
                if(grid[i][j]==1)
                {
                    return fun(grid,i,j);
                }
            }
        }
        return 0;
    }
};