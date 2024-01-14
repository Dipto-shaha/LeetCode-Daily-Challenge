/**
 * @param {string} word1
 * @param {string} word2
 * @return {boolean}
 */
var closeStrings = function(word1, word2) {
    var cnt= new Array(26).fill(0);
    var cnt2 =new Array(26).fill(0);
    for(ch of word1)
    {
        cnt[ch.charCodeAt(0)-97]+=1;
    }
    for(ch of word2)
    {
        cnt2[ch.charCodeAt(0)-97]++;
    }
    for(i=0;i<26;i++)
     { 
        if((cnt[i]==0 && cnt2[i]==0) ||(cnt[i]!=0 && cnt2[i]!=0) )  
            continue;
         else return false;
     }
    cnt.sort((a,b)=>a-b);
    cnt2.sort((a,b)=>a-b);
    for(var i=0;i<26;i++)
    {
        if(cnt[i]!=cnt2[i])   return false;
    }
    return true;
};