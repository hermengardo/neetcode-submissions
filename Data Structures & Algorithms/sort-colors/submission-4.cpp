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
        int ridx = start + std::rand() % (end - start + 1);
        swap(nums, ridx, end);
        int pivot = nums[end];
        int equals = 0;

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