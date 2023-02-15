class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
      vector<int>ans;
      int i,n=num.size();
      for(i=n-1;i>=0 || k>0;i--)
      {
          if(i>=0)
          k+=num[i];
          ans.push_back(k%10);
          k/=10;
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};