class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tem) {
        int i=tem.size()-1;
        stack<int>st;
        vector<int>ans(i+1);
        while(i>=0)
        {
            while(!st.empty() && tem[i]>=tem[st.top()])
                st.pop();
            if(!st.empty())
                ans[i]=st.top()-i;
            else ans[i]=0;
            st.push(i);
            i--;
        }
        return ans;
    }
};