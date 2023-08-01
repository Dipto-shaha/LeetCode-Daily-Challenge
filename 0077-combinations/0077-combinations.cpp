class Solution {
public:
    vector<vector<int>>ans;
    void fun(vector<int>&temp,int n,int k,int i)
    {
        if(temp.size()==k) 
        {
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<=n;j++)
        {
            temp.push_back(j);
            fun(temp,n,k,j+1);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        fun(temp,n,k,1);
        return ans;
    }
};