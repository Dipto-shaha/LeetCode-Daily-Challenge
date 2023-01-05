 bool cmp(vector<int>&a,vector<int>&b)
 {return a[1]<b[1];}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);
        int i,n=points.size(),ans=0,temp=0;
        for(i=0;i<n;i++)
        {
            if(temp==0 || temp < points[i][0])
            {
                ans++;
                temp=points[i][1];
            }
        }
        return ans;
    }
};