class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>v(2);
        for(int i=0;i<=rowIndex;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                    v[1].push_back(1);
                else
                {
                    v[1].push_back(v[0][j-1]+v[0][j]);
                }
            }
            v[0]=v[1];
            v[1].clear();
        }
        return v[0];
    }
};