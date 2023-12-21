/**
 * @param {number[][]} points
 * @return {number}
 */
var maxWidthOfVerticalArea = function(points) {
    points.sort((a,b)=>a[0]-b[0]);
    let ans=0,i,n=points.length
    for(i=1;i<n;i++)
    {
        ans=Math.max(ans,points[i][0]-points[i-1][0])
    }
    return ans;
};