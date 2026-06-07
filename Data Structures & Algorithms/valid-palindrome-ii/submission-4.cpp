class Solution {
public:
    bool validPalindrome(string s) {
        if (s.length() <= 2) {
            return true;
        }

        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                return (isPalindrome(s, i) || isPalindrome(s, j));
            }

            i++;
            j--;
        }

        return true;
    }

    bool isPalindrome(string s, int ignore_idx) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            if (i == ignore_idx) {
                i++;
                continue;
            }

            if (j == ignore_idx) {
                j--;
                continue;
            }

            if (s[i] != s[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};