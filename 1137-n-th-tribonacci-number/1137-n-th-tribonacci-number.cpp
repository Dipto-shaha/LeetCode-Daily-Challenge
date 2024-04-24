class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n<=2) return 1;
        int ans=0,one=0,two=1,three=1,i;
        for(i=3;i<=n;i++){
            ans=one+two+three;
            one=two;
            two=three;
            three=ans;
        }
        return ans;
    }
};