class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        stack<int>st;
        for(int i=1;i<=9;i++)
            st.push(i);
        
        vector<int>ans;
        
        while(!st.empty())
        {
            int x=st.top();
            st.pop();
            if( x>=low && x<=high)
                ans.push_back(x);
            if(x%10<9)
            {  
                x=x*10+(x%10+1);
                if(x<=high)
                    st.push(x);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};