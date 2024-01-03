/**
 * @param {string[]} bank
 * @return {number}
 */
var numberOfBeams = function(bank) {
    var ans=0,cnt,last=0;
    for(row of bank)
    {
        cnt=0;
        for(e of row)
        {
            if(e=='1') cnt++;
        }
        ans+=last*cnt;
        if(cnt) last=cnt;
    }
    return ans;
};