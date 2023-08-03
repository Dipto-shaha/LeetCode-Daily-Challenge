class Solution {
public:
    vector<string>ans;
    string temp="";
    string arr[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void fun(string &dig,int i)
    {
        if(i==dig.size() )
        {
            if(temp.size())
                ans.push_back(temp);
        }
        else
        {
            for(int j=0;j<arr[dig[i]-'0'-2].size();j++)
            {
                temp.push_back(arr[dig[i]-'0'-2][j]);
                fun(dig,i+1);
                temp.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string dig) {
        fun(dig,0);
        return ans;
    }
};