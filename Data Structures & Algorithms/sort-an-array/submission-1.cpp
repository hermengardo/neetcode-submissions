class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (std::size(nums) <= 1) {
            return nums;
        }

        int pivot_idx = std::size(nums) - 1;
        int pivot_value = nums[pivot_idx];
        std::vector<int> left;
        std::vector<int> right;

        for (int i = 0; i < pivot_idx; i++) {
            if (nums[i] > pivot_value) {
                right.push_back(nums[i]);
            } else {
                left.push_back(nums[i]);
            }
        }

        left = sortArray(left);
        right = sortArray(right);

        nums.clear();
        
        nums.insert(nums.end(), left.begin(), left.end());
        nums.push_back(pivot_value);
        nums.insert(nums.end(), right.begin(), right.end());

        return nums;
    }
};