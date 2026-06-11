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
        int hi = n;
        int lo = 1;
        int mid = (hi - lo)/2 + lo;
        int answer = -1;

        while (answer != 0) {
            answer = guess(mid);

            if (answer > 0) {
                lo = mid + 1; 
            } 
            
            if (answer < 0) {
                hi = mid - 1;
            }

            mid = (hi - lo)/2 + lo;
        }

        return mid;
    }
};