/**
 * @param {number[]} nums
 * @return {number}
 */
function cntOperations(cnt)
{
    if(cnt%3==0) return cnt/3;
    var ans=0;
    while(cnt>0)
    {
        if(cnt%3==0) ans+=cnt/3,cnt=0;
        else 
        {
            ans++;
            cnt-=2;
        }
    }
    if(cnt!=0) return -1;
    return ans;
}
var minOperations = function(nums) {
    nums.sort((a,b)=> a-b);
    var ans=0,cnt=1,last=-1;
    for(num of nums)
    {
        if(last==num) cnt++;
        else if(last!=-1)
        {
            last=cntOperations(cnt);
            if(last==-1) return -1;
            ans+=last;
            cnt=1;
        }
        last=num;
    }
    last=cntOperations(cnt);
    if(last==-1) return -1;
    ans+=last;
    return ans;
};