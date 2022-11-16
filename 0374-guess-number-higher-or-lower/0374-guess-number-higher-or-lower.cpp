/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int li=1,hi=n,mid,temp;
        while(li<=hi)
        {
            mid=(li+hi)/2;
            temp=guess(mid);
            if(temp==0)
                return mid;
            else if(temp==1)
                 li=mid+1;
            else hi=mid-1;
        }
        return mid;
    }
};