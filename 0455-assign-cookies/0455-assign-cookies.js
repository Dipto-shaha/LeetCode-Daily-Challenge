/**
 * @param {number[]} g
 * @param {number[]} s
 * @return {number}
 */
var findContentChildren = function(g, s) {
    s.sort((a,b)=> a-b);
    g.sort((a,b)=> a-b);
    var ans=0, pos=0;
    for(var i=0;i<g.length && pos<s.length;i++)
    {
      
       while(pos<s.length && g[i]>s[pos]) pos++;
       if(pos>=s.length) break;
       if(g[i]<=s[pos])  ans++;
       pos++;
      
    }
    return ans;
    
};