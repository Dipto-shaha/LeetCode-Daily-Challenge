bool cmp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
}
class Solution {
public:
    
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);
        int i,n=points.size(),ans=1,mx=points[0][1];
        for(i=0;i<n;i++){
            if(points[i][0]<=mx)
                continue;
            else 
                ans++,mx=points[i][1];
        }
        return ans;
    }
};