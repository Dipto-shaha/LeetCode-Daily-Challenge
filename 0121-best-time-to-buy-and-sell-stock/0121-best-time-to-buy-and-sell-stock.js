/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    var ans=0,mn=1000000;
    for(x in prices)
    {
         mn=Math.min(mn,prices[x]);
         ans=Math.max(ans,prices[x]-mn);
    }
    return ans;
};