class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest = "";

        for (int i = 0; i < strs[0].length(); i++) {
            char target = strs[0][i];

            for (int j = 1; j < std::size(strs); j++) {
                if (strs[j][i] != target) {
                    return longest;
                }
            }

            longest += target;
        }

        return longest;
    }
};