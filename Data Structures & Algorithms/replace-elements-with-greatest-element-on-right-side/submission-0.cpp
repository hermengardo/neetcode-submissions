class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        std::vector<int> result(arr.size());
        
        int max = -1;
        
        for (int i = arr.size() - 1; i >= 0; i--) {
            result[i] = max;

            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return result;
    }
};