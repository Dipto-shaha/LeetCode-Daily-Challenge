class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i,j=0;
        for(i=0;word[i]!='\0';i++){
            if(word[i]==ch){
                while(j<i){
                    swap(word[i],word[j]);
                    i--,j++;
                }
                break;
            }
        }
        return word;
    }
};