class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int i,j,k,n=arr.size(),ans=0,temp,val;
        for(i=0;i<n;i++){
            temp=0;
            for(j=i;j<n;j++){
                temp^=arr[j];
                val=0;
                for(k=j+1;k<n;k++){
                    val^=arr[k];
                    if(val==temp) ans++;
                }
            }
        }
        return ans;
        
    }
};