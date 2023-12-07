/**
 * @param {string} num
 * @return {string}
 */
var largestOddNumber = function(num) {
    var ans="",flag=false;
    for(var i =num.length-1;i>=0;i--)
    {
        if((num[i]-'0')&1)
            flag=true;
        if(flag)
            ans=num[i]+ans;    
    }
    return ans;
};