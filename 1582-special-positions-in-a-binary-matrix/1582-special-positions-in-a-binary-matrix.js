/**
 * @param {number[][]} mat
 * @return {number}
 */
var numSpecial = function(mat) {
    var ans=0;
    for(let row of mat)
    {
        if(row.reduce((sum,item)=> sum+item,0)==1)
        {
             const colIndex = row.indexOf(1);
             let sum = mat.reduce((acc,item)=>acc+ item[colIndex],0);
             if(sum ==1 )
                 ans++;
            
        }
    }
    return ans;
};