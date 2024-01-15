/**
 * @param {number[][]} matches
 * @return {number[][]}
 */
var findWinners = function(matches) {
    var hashMap ={};
    var ans = [[],[]];
    for(mat of matches)
    {
        if(hashMap[mat[1]])
            hashMap[mat[1]]++;
        else hashMap[mat[1]]=1;
        if(hashMap[mat[0]])
            hashMap[mat[0]]+=0;
        else hashMap[mat[0]]=0;
    }
    //console.log(hashMap);
    for(var item in hashMap)
    {
        if(hashMap[item]==0)
            ans[0].push(item);
        else if(hashMap[item]==1)
            ans[1].push(item);
    }
    return ans;
};