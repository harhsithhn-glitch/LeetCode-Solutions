class Solution {
public:
    string makeLargestSpecial(string s) {
        vector<string> parts;
        int count = 0;
        int start = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') count++;
            else count--;

            // when balanced substring found
            if (count == 0) {
                // recursively solve inside part
                string inner = s.substr(start + 1, i - start - 1);
                parts.push_back("1" + makeLargestSpecial(inner) + "0");
                start = i + 1;
            }
        }

        // sort descending for lexicographically largest
        sort(parts.begin(), parts.end(), greater<string>());

        string result;
        for (auto &str : parts)
            result += str;

        return result;
    }
};
