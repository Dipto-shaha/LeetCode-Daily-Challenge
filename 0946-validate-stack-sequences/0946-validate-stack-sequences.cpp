class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int pos=0;
        for(auto u:pushed)
        {
            st.push(u);
            while(st.size()>=1 && st.top()==popped[pos])
            {
                st.pop();
                pos++;
            }
        }
        if(st.size()==0) return true;
        return false;
    
    }
};