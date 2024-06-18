class Solution {
public:
    int bs(vector<int>&worker,int t,int hi){
        int mid,li=0, ans=-1;
        while(li<=hi){
            mid=(li+hi)/2;
            if(worker[mid]>=t){
                hi=mid-1;
                ans=mid;
            }
            else li=mid+1;
        }
        return ans;
    }
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>dp;
        int i,n=difficulty.size(),m=worker.size()-1;
        for(i=0;i<n;i++){
            dp.push_back({profit[i],difficulty[i]});
        }
        sort(dp.begin(),dp.end());
        sort(worker.begin(),worker.end());
        int pos,ans=0;
        for(i=n-1;i>=0;i--){
            pos=bs(worker,dp[i].second,m);
            if(pos!=-1){
                ans+=(m-pos+1)*dp[i].first;
                m=pos-1;
            }
            
        }
        return ans;
    }
};