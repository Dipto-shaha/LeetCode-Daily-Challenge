/**
 * @param {number[][]} matrix
 * @return {number[][]}
 */
var transpose = function(matrix) {
    var n=matrix.length
    var m=matrix[0].length
    var ans=[]
    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
       {
           if(i)
             ans[j].push(matrix[i][j])
           else ans.push([matrix[i][j]])
       }
    }
    return ans;
};