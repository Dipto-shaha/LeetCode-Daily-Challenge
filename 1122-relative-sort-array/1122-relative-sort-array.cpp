class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>cnt(1001,0),ans;
        for(auto u:arr1){
            cnt[u]++;
        }
        for(auto u:arr2){
            while(cnt[u]){
                ans.push_back(u);
                cnt[u]--;
            }
        }
        
        for(int i=0;i<=1000;i++){
            while(cnt[i]){
                ans.push_back(i);
                cnt[i]--;
            }
        }
        return ans;
    }
};