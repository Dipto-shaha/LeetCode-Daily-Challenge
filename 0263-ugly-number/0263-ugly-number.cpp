class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        int x[]={2,3,5},i=0;
        while(i<3)
        {
            if(n%x[i]==0) n/=x[i];
            else i++;
        }
        return n==1;
        
    }
};