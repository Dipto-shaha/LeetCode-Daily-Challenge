/**
 * @param {string} s
 * @return {number}
 */
var minOperations = function(s) {
    let cnt1=0,cnt2=0,t='1',t2='0';
    for( let i of s)
    {
        if(t!=i) cnt1++;
        if(t2!=i) cnt2++;
        [t,t2]=[t2,t]
    }
    return Math.min(cnt1,cnt2);
};