class Solution {
public:
    void sortColors(vector<int>& nums) {
        quicksort(nums, 0, nums.size() - 1);
    }

    void quicksort(vector<int>& nums, int start, int end) {
        if (start > end) {
            return;
        }

        int i = start - 1;
        int pivot = nums[end];

        for (int j = start; j < end; j++) {
            if (nums[j] < pivot) {
                i++;
                swap(nums, i, j);
            }
        }

        swap(nums, i + 1, end);

        quicksort(nums, i + 2, end);
        quicksort(nums, start, i);
    }

    void swap(vector<int>& nums, int i, int j) {
        int aux = nums[i];
        nums[i] = nums[j];
        nums[j] = aux;
    }
};