class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0,age;
        for(auto u:details){
            age=(u[11]-'0')*10+u[12]-'0';
            if(age>60) ans++;
        }
        return ans;
    }
};