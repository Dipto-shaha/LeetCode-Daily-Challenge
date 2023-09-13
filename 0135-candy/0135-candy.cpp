class Solution {
public:
    int candy(vector<int>& r) {
        int i,n=r.size(),ans=0,last=1;
        if(n==1) return 1;
        vector<int>cnt(n);
        for(i=0;i<n;i++)
            cnt[i]=1;
        for(i=1;i<n;i++)
        {
            if(r[i]>r[i-1])
                cnt[i]=cnt[i-1]+1;

        }
        for(i=n-2;i>=0;i--)
        {
            if(r[i]>r[i+1])
            {
                if(cnt[i]<=cnt[i+1])
                    cnt[i]=cnt[i+1]+1;
            }
        }
        for(i=0;i<n;i++)
            ans+=cnt[i];
        return ans;
    }
};
/*[1,0,2]
[1,2,2]
[1,2,3,4,5,1,2,3]
[1,2,1,2,2,2,5,3,4,5,4]
[1,1,2,2,5,5,3,3,2,2]
[1,2,3,4,3,2,1,5,4,3,2,4,3,4,3,4,5,5,3,4,4,5,3,4,4]*/