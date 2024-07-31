class Solution {
public:
    int dp[1001];
    int fun(vector<vector<int>>& books, int shelfWidth,int w,int i,int h){
        if(i>=books.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int ans=INT_MAX;
        for(int j=i;j<books.size() && w<=shelfWidth;j++){
            if(w+books[j][0]>shelfWidth){
                ans=min(h+fun(books,shelfWidth,0,j,0),ans);
                break;
            }
            w+=books[j][0];
            h=max(h,books[j][1]);
            ans=min(h+fun(books,shelfWidth,0,j+1,0),ans);
        }
        dp[i]=ans;
        return ans;
    }
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        memset(dp,-1,sizeof(dp));
        return fun(books,shelfWidth,0,0,0);
    }
};