class Solution {
public:
    bool judgeSquareSum(int c) {
         if(!c ) return true;
         long int temp,i;
         for(i=1; i<=c; i++){
             if(c<i*i) break;
             temp=sqrt(c-i*i);
             if(temp*temp==(c-i*i)) return true;
         }
        return false;
    }
};