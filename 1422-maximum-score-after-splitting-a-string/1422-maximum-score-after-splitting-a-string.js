/**
 * @param {string} s
 * @return {number}
 */
var maxScore = function(s) {
    let i,n=s.length,ans=0,cnt=0,left=0
    for(i=0;i<n;i++)
    {
        if(s[i]=='1') cnt++;
    }
    for(i=0;i<n-1;i++)
    {
        if(s[i]=='1') left++;
        ans=Math.max(ans,cnt+i+1-2*left)
    }
    return ans
};