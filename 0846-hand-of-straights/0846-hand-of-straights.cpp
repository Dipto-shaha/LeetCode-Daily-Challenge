class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int l) {
        map<int,int>cnt;
        for(auto u:hand){
            cnt[u]++;
        }
        int x,y,temp;
        for(auto u:cnt){
            x=u.first;
            y=u.second;
            if(y){
                temp=l-1;
                while(temp)
                if(cnt[x+temp]>=y){
                    cnt[x+temp]-=y;
                    temp--;
                }
                else return false;
            }
        }
        return true;
    }
};