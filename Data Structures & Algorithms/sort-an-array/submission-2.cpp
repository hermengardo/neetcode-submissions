class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0, nums.size() - 1);

        return nums;
    }

    void quicksort(vector<int>& nums, int start, int end) {
        if (end > nums.size() - 1) {
            return;
        }

        if (start > end) {
            return;
        }

        int aux;
        int i = start -1;
        int pivot = nums[end];

        for (int j = start; j < end; j++) {
            if (nums[j] < pivot) {
                i++;
                swap(nums, i, j);
            }
        }

        swap(nums, i+1, end);
        
        quicksort(nums, start, i);
        quicksort(nums, i+2, end);
    }

    void swap(vector<int>& nums, int i, int j) {
        int aux = nums[i];
        nums[i] = nums[j];
        nums[j] = aux;
    }
};