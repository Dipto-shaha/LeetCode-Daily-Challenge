class Solution {
    public int maxProfit(int[] prices) {
        int mn=prices[0],ans=0;
        for(int x:prices)
        {
            mn=Math.min(mn,x);
            ans=Math.max(ans,x-mn);
        }
        return ans;
    }
}