/**
 * @param {number} n
 * @return {number}
 */
var totalMoney = function(n) {
    var cnt=[1,2,3,4,5,6,7],ans=0,i=0;
    while(n--)
    {
       ans+=cnt[i%7];
        cnt[i%7]++;
        i++;
    }
    return ans;
};