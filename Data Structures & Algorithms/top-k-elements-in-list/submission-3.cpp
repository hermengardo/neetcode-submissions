class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.size() <= 1) {
            return nums;
        }
        
        std::vector<int> ans(k, 0);

        recursive_frequency(nums, ans, nums.size() - 1, 0);

        return ans;
    }

    void recursive_frequency(vector<int>& nums, vector<int>& ans, int end,  int idx) {
        if (idx >= ans.size()) {
            return;
        }

        int most_frequent = mostFrequentElement(nums, end);
        ans[idx] = most_frequent;
        
        int i = 0;
        while(nums[i] != most_frequent) {
            i++;
        }
        
        int j = end;
        while (nums[i] == most_frequent) {
            if (i > j) {
                break;
            }

            swap(nums, i, j);
            i++;
            j--;
        }

        recursive_frequency(nums, ans, j,  idx + 1);
    }

    void swap(vector<int>& arr, int i, int j) {
        int aux = arr[i];
        arr[i] = arr[j];
        arr[j] = aux;
    }

    int mostFrequentElement(vector<int>& nums, int end) {
        sort(nums.begin(), nums.begin() + end + 1);
        int candidate = nums[0];
        int mostFrequent = nums[0];

        int counter = 1;
        int max_count = 1;
        for (int i = 1; i <= end; i++) {
            if (nums[i] == candidate) {
                counter++;
            } else {
                counter = 1;
                candidate = nums[i];
            }

            if (counter > max_count) {
                mostFrequent = candidate;
                max_count = counter;
            }
        }

        return mostFrequent;
    }
};