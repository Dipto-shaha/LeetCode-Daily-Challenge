/**
 * @param {number} n
 * @return {number}
 */
var numberOfMatches = function(n) {
    var ans=0;
    while(n>1)
    {
        ans=ans+Math.floor(n/2);
        n=(n+1)/2;
    }
    return ans;
};