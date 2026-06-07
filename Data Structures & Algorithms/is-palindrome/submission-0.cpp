class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        char left;
        char right;
        while (i < j) {
            left = tolower(s[i]);
            right = tolower(s[j]);

            if (!std::isalnum(left)) {
                i++;
                continue;
            }

            if (!std::isalnum(right)) {
                j--;
                continue;
            }

            if (left != right) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};
