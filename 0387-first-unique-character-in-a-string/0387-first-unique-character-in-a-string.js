/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
    var ans=-1,i,cnt={};
    for(i=s.length-1;i>=0;i--)
    {
        if(!(s[i] in cnt)) {
            cnt[s[i]]=1;
        }
        else cnt[s[i]]++;
    }
    for(i=0;i<s.length;i++)
    {
        if(cnt[s[i]]==1)   return i;  
    }
    return -1;
};