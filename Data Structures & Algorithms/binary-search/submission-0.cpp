class Solution {
public:
    int search(vector<int>& nums, int target) {
        return binary_search(nums, 0, nums.size() - 1, target);
    }

    int binary_search(vector<int>& nums, int lo, int hi, int target) {
        if (lo > hi) {
            return -1;
        }

        int mid = (hi - lo)/2 + lo;

        if (nums[mid] == target) {    
            return mid;
        }

        if (nums[mid] > target) { 
            return binary_search(nums, lo, mid - 1, target);
        } 
        
        if (nums[mid] < target) {
            return binary_search(nums, mid + 1, hi, target);
        }
    }
};
