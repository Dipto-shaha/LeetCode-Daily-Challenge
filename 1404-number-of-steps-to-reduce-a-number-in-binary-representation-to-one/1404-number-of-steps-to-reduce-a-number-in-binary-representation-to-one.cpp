class Solution {
public:
    int numSteps(string s) {
        int temp=0,i=s.size()-1,ans=0;
        while(i>=0){
            if(i==0 && temp==0) break;
            if(i==0 && temp==1) {ans+=1;break;}
            if(s[i]=='1' && temp==0) ans+=2, temp=1;
            else if(s[i]=='1' && temp==1) ans++;
            else if(s[i]=='0' && temp==0) ans++;
            else ans+=2,temp=1;
            i--;
        }
        return ans;
    }
};