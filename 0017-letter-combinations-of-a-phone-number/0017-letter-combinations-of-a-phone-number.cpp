class Solution {
public:
    vector<string> ans;

    void solve(string &digits, int i, string &temp, map<int, string> &mp) {
        if (i == digits.length()) {
            ans.push_back(temp);
            return;
        }

        int digit = digits[i] - '0';  // convert char → int key (e.g., '2' → 2)
        string letters = mp[digit];

        for (char ch : letters) {
            temp.push_back(ch);
            solve(digits, i + 1, temp, mp);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};  // handle edge case

        map<int, string> mp = {
            {2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"},
            {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}
        };

        string temp = "";
        solve(digits, 0, temp, mp);
        return ans;
    }
};
