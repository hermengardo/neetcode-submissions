class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int counter = 0;

        for (int i = 0; i < std::size(nums); i++) {
            if (nums[i] != val) {
                nums[counter] = nums[i];
                counter++;
            }
        }

        return counter;
    }
};