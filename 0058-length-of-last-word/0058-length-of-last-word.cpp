class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0,cnt=0;
        for(auto u:s){
             if(u!=' '){
                cnt++;
                ans=cnt;
             }else cnt=0;
        }
        return ans;
    }
};