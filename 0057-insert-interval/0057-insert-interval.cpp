class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size(),i,j,last=-1;
        bool flag=true;
        vector<vector<int>>ans;
        for(i=0;i<n;i++)
        {
            if(flag && intervals[i][0]>newInterval[0]  && intervals[i][0]>newInterval[1])
            {
                ans.push_back(newInterval);
                ans.push_back(intervals[i]);
                flag=false;
            }
            else if(flag && newInterval[0]<=intervals[i][0] && intervals[i][0] <=newInterval[1])
            {
                intervals[i][0]=newInterval[0];
                j=i;
                while(j<n &&  newInterval[0]<=intervals[j][0] && intervals[j][0] <=newInterval[1])
                {
                    newInterval[1]=max(intervals[j][1],newInterval[1]);
                    j++;
                }
                intervals[i][1]=newInterval[1];
                ans.push_back(intervals[i]);
                flag=false;
                i=j-1;

            }
            else if(intervals[i][0]<=newInterval[0] && newInterval[0]<=intervals[i][1])
            {
                intervals[i][1]=max(intervals[i][1],newInterval[1]);
                j=i+1;
                while(j<n && intervals[i][1]>=intervals[j][0])
                {
                    intervals[i][1]=max(intervals[i][1],intervals[j][1]);
                    j++;
                }
                ans.push_back(intervals[i]);
                flag=false;
                i=j-1;
            }
            else ans.push_back(intervals[i]);
        }
        if(flag)ans.push_back(newInterval);
        return ans;
    }
};