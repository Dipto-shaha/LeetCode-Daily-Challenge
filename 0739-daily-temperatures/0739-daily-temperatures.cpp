class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size(),i;
        vector<int>ans(n);
        stack<int>st;
        for(i=n-1;i>=0;i--)
        {
            if(!st.empty() && t[st.top()]>t[i])
               ans[i]=1,st.push(i);
            else
            {
                while(!st.empty() && t[st.top()]<=t[i]) 
                {
                    st.pop();
                }
                if(st.empty())
                    ans[i]=0;
                else ans[i]=st.top()-i;
                st.push(i);

            }  

        }
        return ans;

    }
};