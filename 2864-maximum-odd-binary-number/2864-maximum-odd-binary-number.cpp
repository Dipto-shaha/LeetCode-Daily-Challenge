class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt0=0,cnt1=-1;
        for(auto u:s)
        {
            if(u=='0') cnt0++;
            else cnt1++;
        }
        s="";
        while(cnt1--) s+='1';
        while(cnt0--) s+='0';
        return s+'1';
    }
};