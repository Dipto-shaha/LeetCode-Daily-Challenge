class Solution {
public:
    int nthUglyNumber(int n) {
        int i,j,k;
        long long int temp;
        vector<int>ans;
        for(k=0;k<=13;k++){
            for(j=0;j<=20;j++){
                for(i=0;i<=30;i++){
                    temp= pow(2,i)*pow(3,j)*pow(5,k);
                    if(temp>INT_MAX) break;
                    ans.push_back(temp);
                }
            }
        }
        sort(ans.begin(),ans.end());
        // for(auto u:ans){
        //     cout<<u<<" ";
        // }
        return ans[n-1];
    }
};