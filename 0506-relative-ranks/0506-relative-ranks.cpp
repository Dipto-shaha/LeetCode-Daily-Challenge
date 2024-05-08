class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size(),i,cnt=0;
        string s[]={"Gold Medal","Silver Medal","Bronze Medal"};
        vector<string>ans(n);
        vector<pair<int,int>>v;
        for(i=0;i<n;i++)
        {
            v.push_back({score[i],i});
        }
        sort(v.begin(),v.end());
        while(n--){
            if(cnt<3)
                ans[v[n].second]=s[cnt];
            else ans[v[n].second]=to_string(cnt+1);
            cnt++;
        }
        return ans;
    }
};