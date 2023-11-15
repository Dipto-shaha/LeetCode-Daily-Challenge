class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int i,n=arr.size(),ans=0;
        if(n==1) return 1;
        sort(arr.begin(),arr.end());
        arr[0]=1;
        for(i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]<=1)
                continue;
            else arr[i]=arr[i-1]+1;
        }
        return arr[n-1];
    }
};