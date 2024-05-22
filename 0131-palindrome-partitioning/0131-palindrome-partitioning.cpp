class Solution {
public:
    int dp[16][16]={0};
    vector<vector<string>>ans;
    void fun(vector<string>temp,string &s, int i){
        if(i>=s.size()) {
            ans.push_back(temp); 
            return;
        }
        for(int j=0;i+j<s.size();j++){
            if(dp[i][i+j]==1){
                temp.push_back(s.substr(i,j+1));
                fun(temp,s,i+j+1);
                temp.pop_back();
            }
        }
        temp.clear();
        return;
    }
    vector<vector<string>> partition(string s) {
        int i,j,n=s.size();
        for(i=0;i<n;i++){
            if(i+1<n && s[i]==s[i+1]) dp[i][i+1]=1;
            dp[i][i]=1;
        }
        for(i=1;i<n;i++){
            for(j=1;i+j<n;j++){
                if(dp[j][j+i-1]==1 && s[j-1]==s[i+j])
                    dp[j-1][i+j]=1;
            }
        }
        vector<string>temp;
        fun(temp,s,0);
        return ans;
    }
};