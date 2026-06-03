class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_length = strs[0].size();

        for (string str : strs) {
            if (str.size() < min_length) {
                min_length = str.size();
            }
        }

        string longest = "";
        for (int i = 0; i < min_length; i++) {
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