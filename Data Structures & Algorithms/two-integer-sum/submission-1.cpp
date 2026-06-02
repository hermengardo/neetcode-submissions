class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> table;

        for (int i = 0; i < nums.size(); i++) {
            table[nums[i]] = i; 
        }

        for (int i = 0; i < nums.size(); i++) {
            int curr = nums[i];
            int key = target - curr;

            if (table.contains(key) && table[key] != i) {
                return {i, table[key]};
            }
        }

        return {-1, -1};
    }
};
