/**
 * @param {number[][]} grid
 * @return {number[][]}
 */
var onesMinusZeros = function(grid) {
    var n= grid.length,m=grid[0].length
    var row = new Array(n).fill(0);
    var col = new Array(m).fill(0);
    var i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            row[i]+=grid[i][j];
            col[j]+=grid[i][j];
        }    
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            grid[i][j]=2*row[i]+2*col[j]-n-m;
        }    
    }
    return grid;
};