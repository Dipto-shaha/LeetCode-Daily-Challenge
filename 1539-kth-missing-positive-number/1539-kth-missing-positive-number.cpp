class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int j=0,n=arr.size(),cnt=1,i;
        for( i=1;;i++)
        {
            if(j<n && arr[j]==i) 
                j++;
            else if(cnt==k) return i;
            else cnt++;
        }
        return i;
    }
};