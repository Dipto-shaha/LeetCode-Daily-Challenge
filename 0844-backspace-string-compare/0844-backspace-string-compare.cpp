class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size(),m=t.size(),i=0,j=0;
        stack<char>ss,tt;
        while(i<n || j<m)
        {
            if(i<n && s[i]!='#')  ss.push(s[i]);
            else if(i<n && !ss.empty()) ss.pop();
            if(j<m && t[j]!='#')  tt.push(t[j]);
            else if(j<m && !tt.empty()) tt.pop();
            i++,j++;
            
        }
        if(ss.size()!=tt.size()) return false;
        while(!ss.empty())
        {
            if(ss.top()!=tt.top()) return false;
            ss.pop();tt.pop();
        }
        return true;
    }
};