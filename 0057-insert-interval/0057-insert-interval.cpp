class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int i,n=intervals.size();
        for(i=0;i<n;i++){
           if(intervals[i][0]< newInterval[0] && intervals[i][1] < newInterval[0])
               ans.push_back(intervals[i]);
            else if( newInterval[1] < intervals[i][0] &&  newInterval[1]< intervals[i][0] ){
                if(newInterval[1]!=-1)
                    ans.push_back(newInterval),newInterval[1]=-1;
                ans.push_back(intervals[i]);
            }
            else{
                int l=min(intervals[i][0],newInterval[0]),h=max(intervals[i][1],newInterval[1]);
                while(i<n && intervals[i][0]<=h){
                    h=max(intervals[i][1],h);
                    i++;
                }
                newInterval[1]=-1;
                ans.push_back({l,h});
                i--;
            }
        }
        if(newInterval[1]!=-1) ans.push_back(newInterval);
        return ans;
    }
};