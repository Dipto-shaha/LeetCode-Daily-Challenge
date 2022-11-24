class Solution {
public:
    bool fun(int i,int j,int l ,vector<vector<char>>& board,string word)
    {
        if(l==word.size()) return true;
        if(i>=0 && i<board.size() && j>=0 && j<board[0].size() && board[i][j]==word[l])
        {
            char ch=board[i][j];
            board[i][j]='.';
            bool ans=false;
            ans=ans||fun(i+1,j,l+1,board,word);
            ans=ans||fun(i-1,j,l+1,board,word);
            ans=ans||fun(i,j+1,l+1,board,word);
            ans=ans||fun(i,j-1,l+1,board,word);
            board[i][j]=ch;
            return ans;

        }
        else 
          return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size(),i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(word[0]==board[i][j])
                {
                    if(fun(i,j,0,board,word))
                        return true;
                }
            }
        }
        return false;
    }
};