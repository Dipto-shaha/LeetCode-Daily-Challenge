class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int li=0,hi,mid,n=mat.size(),m=mat[0].size();
        hi=n*m-1;
        while(li<=hi)
        {
            mid=(li+hi)/2;
            if(mat[mid/m][mid%m]==target) return true;
            else if(mat[mid/m][mid%m]<target) li=mid+1;
            else hi=mid-1;
        }
        return false;
    }
};