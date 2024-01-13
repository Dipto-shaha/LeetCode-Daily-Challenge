/**
 * @param {string} s
 * @param {string} t
 * @return {number}
 */
var minSteps = function(s, t) {
    var cnt= {},ans=0;
    for(ch of s)
    {
        if(cnt[ch]) cnt[ch]++;
        else cnt[ch]=1;
    }
    for(ch of t)
    {
        if(cnt[ch]) cnt[ch]--;
        else ans++;
    }
    return ans;
    
};