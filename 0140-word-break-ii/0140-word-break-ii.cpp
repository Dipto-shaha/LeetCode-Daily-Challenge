class Solution {
public:
    unordered_map<string,int>m;
    vector<string>ans;
    void fun(string s, int i,string curr){
        if(i>=s.size()) {
            ans.push_back(curr);
            return;
        }
        string temp="";
        for(int j=i;j<s.size();j++){
            temp+=s[j];
            if(m[temp]){
                fun(s,j+1,curr!=""? curr+" "+temp : temp);
            }
        }
        return ;
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        for(auto u:wordDict){
            m[u]++;
        }
        fun(s,0,"");
        return ans;
    }
};