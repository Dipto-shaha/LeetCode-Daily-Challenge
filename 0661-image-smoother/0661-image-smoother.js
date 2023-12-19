/**
 * @param {number[][]} img
 * @return {number[][]}
 */
var imageSmoother = function(img) {
    var i,j,n=img.length,m=img[0].length,k,sum=0,cnt=0
    var ans=[]
    var dx=[0,0,0,1,1,1,-1,-1,-1],dy=[0,1,-1,-1,1,0,-1,1,0]
    for(i=0;i<n;i++)
    {
        var temp=[]
        for(j=0;j<m;j++)
        {
            sum=0,cnt=0
            for(k=0;k<9;k++)
            {
               if(i+dx[k]>=0 && i+dx[k]<n && j+dy[k]>=0 && j+dy[k]<m) 
               {
                   cnt+=1;
                   sum=sum+img[i+dx[k]][j+dy[k]];
               }
            }
           temp.push(Math.floor(sum/cnt));
        }
        ans.push(temp)
    }
    return ans
};