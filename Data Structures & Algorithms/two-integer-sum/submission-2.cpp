class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> table;
        
        int curr;
        int key;
        
        for (int i = 0; i < nums.size(); i++) {
            curr = nums[i];
            key = target - curr;

            if (table.contains(key)) {
                return {table[key], i};
            }

            table[curr] = i;
        }

        return {-1, -1};
    }
};
