class Solution {
public:
    int dp[301][11];
    int fun(int i, int cnt,vector<int>& job)
    {
        if(cnt==0 && i==job.size()) return 0;
        if(i>=job.size()) return 300001;
        if(dp[i][cnt]!=-1)
            return dp[i][cnt];
        int ans=300001,now=job[i];
        for(int j=i;j<job.size()-cnt+1 && cnt>0;j++)
        {
            now=max(job[j],now);
            ans=min(ans,now+fun(j+1,cnt-1,job));
        }
        dp[i][cnt]=ans;
        return ans;
    }
    int minDifficulty(vector<int>& job, int d) {
        if(job.size()<d) return -1;
        memset(dp,-1,sizeof(dp));
        return fun(0,d,job);
    }
};