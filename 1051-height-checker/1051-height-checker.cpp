class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>temp;
        temp=heights;
        int ans=0,i,n=temp.size();
        sort(temp.begin(),temp.end());
        for(i=0;i<n;i++){
            if(temp[i]!=heights[i])
                ans++;
        }
        return ans;
    }
};