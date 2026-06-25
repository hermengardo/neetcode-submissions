class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::vector<int> ans;

        int k = 1;
        int i = 0;
        int j = 1;

        while (j < nums.size()) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
                k++;
            } 

            j++;
        }
        
        return k;
    }
};