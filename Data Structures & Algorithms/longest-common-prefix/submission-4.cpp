class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        if (std::size(strs) == 1) {
            return strs[0];
        }

        string longest = "";

        std::sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs.back();

        for (int i = 0; i < first.length(); i++) {
            if (i > last.length()) {
                return longest;
            } 

            if (first[i] != last[i]) {
                return longest;
            } 

            longest += first[i];
        }
        
        return longest;
    }
};