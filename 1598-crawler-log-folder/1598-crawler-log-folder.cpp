class Solution {
public:
    int minOperations(vector<string>& logs) {
        string back="../", same="./";
        int cnt=0;
        for(auto u:logs){
            if(u==back) cnt=max(0,cnt-1);
            else if(u==same) continue;
            else cnt++;
        }
        return cnt;
    }
};