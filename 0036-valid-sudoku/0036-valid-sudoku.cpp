class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int i,j,k,r,c;
        for(i=0;i<9;i++)
        {
            map<char,int>m;
            for(j=0;j<9;j++)
            {
                m[board[i][j]]++;
                if( m[board[i][j]]>1 &&  board[i][j]!='.')
                    return false;
            }
        }
        for(i=0;i<9;i++)
        {
            map<char,int>m;
            for(j=0;j<9;j++)
            {
                m[board[j][i]]++;
                if( m[board[j][i]]>1 &&  board[j][i]!='.')
                    return false;
            }
        }
        for(i=0;i<9;i+=3)
        {
            for(j=0;j<9;j+=3)
            {
                map<char,int>m;
                for(r=i;r<i+3;r++)
                {
                    for(c=j;c<j+3;c++)
                    {
                         m[board[r][c]]++;
                         if( m[board[r][c]]>1 &&  board[r][c]!='.')
                         return false;
                    }
                }
               
            }
        }
        return true;

    }
};