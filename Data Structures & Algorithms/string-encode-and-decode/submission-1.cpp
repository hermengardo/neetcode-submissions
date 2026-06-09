class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for (string str : strs) {
            result = result + str + ";";
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> arr;
        string str = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ';') {
                arr.push_back(str);
                str = "";
            } else {
                str = str + s[i];
            }
        }

        return arr;
    }

};
