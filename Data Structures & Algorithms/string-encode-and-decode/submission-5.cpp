class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;

        for (const string& str : strs) {
            encoded.append(to_string(str.length()));
            encoded.push_back('#');
            encoded.append(str);
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> arr;
        int i = 0;
        int count = 0;
        string length = "";
        
        while (i < s.length()) {
            if (s[i] != '#') {
                length = length + s[i];
            } else {
                count = std::stoi(length);
                arr.push_back(s.substr(i + 1, count));
                i += count;
                length = "";
            }
            i++;
        }
        return arr;
    }

};
