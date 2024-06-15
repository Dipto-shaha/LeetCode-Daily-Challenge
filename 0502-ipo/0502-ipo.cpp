class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int i,n=profits.size();
        vector<pair<int,int>>ipo;
        for(i=0;i<n;i++){
            ipo.push_back({capital[i],profits[i]});
        }
        sort(ipo.begin(),ipo.end());
        priority_queue<int>pro;
        i=0;
        while(k--){
            while(i<n && w>=ipo[i].first) {
                pro.push(ipo[i].second);
                i++;
            }
            if(!pro.empty()) w+=pro.top(),pro.pop();
            
        }
        return w;
    }
};