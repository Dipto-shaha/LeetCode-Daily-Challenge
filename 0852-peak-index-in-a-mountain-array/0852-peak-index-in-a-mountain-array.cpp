class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int li=1,hi=arr.size(),mid;
        while(li<=hi)
        {
           mid=(li+hi)/2;
           if(arr[mid-1]< arr[mid])
             li=mid+1;
           else hi=mid-1;
        }
        return li-1;
    }
};