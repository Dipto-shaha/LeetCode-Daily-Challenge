class Solution {
public:
    int bs(vector<int>&cnt,int i,int t){
        int li=i,hi=cnt.size()-1,mid,ans=i-1;
        while(li<=hi){
            mid=(hi+li)/2;
            if(cnt[mid]<=t){
                ans=mid;
                li=mid+1;
            }
            else hi=mid-1;
        }
        return ans-i+1;
    }
    int equalSubstring(string s, string t, int maxCost) {
        int i,n=s.size(),ans=0;
        vector<int>cnt(n+1,0);
        for(i=0;i<n;i++){
            cnt[i+1]=cnt[i]+abs(s[i]-t[i]);
        }
        for(i=1;i<=n;i++){
            ans=max(ans, bs(cnt,i,cnt[i-1]+maxCost));
        }
        return ans;
    }
};