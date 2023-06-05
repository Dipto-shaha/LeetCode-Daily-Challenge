class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& a) {
        int n=a.size(),i,x,y,tempx,tempy,temp;
        x=a[0][0]-a[1][0];
        y=a[0][1]-a[1][1];
        temp=__gcd(x,y);
        x=x/temp;
        y=y/temp;
        for(i=2;i<n;i++)
        {
            tempx=a[i-1][0]-a[i][0];
            tempy=a[i-1][1]-a[i][1];
            temp=__gcd(tempx,tempy);
            tempx=tempx/temp;
            tempy=tempy/temp;
            if(x!=tempx || y!=tempy)
                return false;
        }
        return true;
    }
};