class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int i,j,cnt,n=mat.size(),m=mat[0].size();
        vector<int>ans;
        vector<pair<int,int>>q;
        for(i=0;i<n;i++)
        {
            cnt=0;
            for(j=0;j<m && mat[i][j];j++)
                cnt++;
            q.push_back({cnt,i});
        }
        sort(q.begin(),q.end());
        n=0;
        while(k--)
        {
            ans.push_back(q[n++].second);
        }
        return ans;
    }
};