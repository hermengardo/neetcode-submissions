class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = std::size(s) - 1;

        while (i < j) {
            swap(s, i, j);
            i++;
            j--;
        }
    }

    void swap(vector<char>& s, int i, int j) {
        char aux = s[i];
        s[i] = s[j];
        s[j] = aux;
    }
};