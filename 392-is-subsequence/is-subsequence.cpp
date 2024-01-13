class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        // Iterate through both strings
        while (i < s.length() && j < t.length()) {
            
            // If the current characters match, move to the next character in both strings
            if (s[i] == t[j]) {
                i += 1;
                j += 1;
            } else {
                j += 1; 
            }
        }
         // If all characters in s have been matched, s is a subsequence of t
        return i == s.length();
    }
};