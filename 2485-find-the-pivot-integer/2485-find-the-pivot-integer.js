/**
 * @param {number} n
 * @return {number}
 */
var pivotInteger = function(n) {
    var temp=(n*(n+1))/2,i,sum;
    for(i=1;i<=n;i++){
        sum=i*(i+1)/2;
        if(sum==temp-sum+i)
            return i;
    }
    return -1;
};