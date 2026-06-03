class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (std::size(strs) == 0) {
            return {{""}};
        }

        std::unordered_map<std::string, std::vector<std::string>> freq_table;
        std::string key;

        for (std::string str : strs ) {
            key = str;
            std::sort(key.begin(), key.end());
            freq_table[key].push_back(str);
        }

        std::vector<std::vector<std::string>> result;
        for (auto& [key, group] : freq_table) {
            result.push_back(group);
        }
        
        return result;
    }
};
