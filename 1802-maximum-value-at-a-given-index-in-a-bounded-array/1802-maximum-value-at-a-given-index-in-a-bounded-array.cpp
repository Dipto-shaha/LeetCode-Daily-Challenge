class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int li=0,hi=maxSum-n,mid;
        while(li<hi)
        {
            mid=(li+hi+1)/2;
            int b = max(mid - index, 0);
            long res = long(mid + b) * (mid - b + 1) / 2;
            b = max(mid - ((n - 1) - index), 0);
            res += long(mid + b) * (mid - b + 1) / 2;
            if(res-mid<=maxSum-n)
            {
                li=mid;
            }
            else hi=mid-1;
        }
        return li+1;
    }
};