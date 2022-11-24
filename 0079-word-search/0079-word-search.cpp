class Solution {
public:
    vector<vector<char>>b;
    bool fun(int i,int j,int l,string word)
    {
        if(l==word.size()) return true;
        if(i>=0 && i<b.size() && j>=0 && j<b[0].size() && b[i][j]==word[l])
        {
            char ch=b[i][j];
            b[i][j]='.';
            bool ans=false;
            ans=ans||fun(i+1,j,l+1,word);
            ans=ans||fun(i-1,j,l+1,word);
            ans=ans||fun(i,j+1,l+1,word);
            ans=ans||fun(i,j-1,l+1,word);
            b[i][j]=ch;
            return ans;

        }
        else 
          return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size(),i,j;
        b=board;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(word[0]==board[i][j])
                {
                    if(fun(i,j,0,word))
                        return true;
                }
            }
        }
        return false;
    }
};