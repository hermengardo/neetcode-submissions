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

        for (int curr_idx = 0; curr_idx < std::size(left); curr_idx++) {
            nums[curr_idx] = left[curr_idx];
        }

        nums[std::size(left)] = pivot_value;

        for (int curr_idx = 0; curr_idx < std::size(right); curr_idx++) {
            nums[std::size(left) + curr_idx + 1] = right[curr_idx];
        }

        return nums;
    }
};