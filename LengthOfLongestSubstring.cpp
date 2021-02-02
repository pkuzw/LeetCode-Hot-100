//
// Created by wayne on 2021/2/2.
//

#include "LengthOfLongestSubstring.h"

int LengthOfLongestSubstring::lengthOfLongestSubstring(string s) {
    if (s.empty()) {
        return 0;
    }
    vector<int> dp(s.size(), 1);
    for (auto i = 1; i < s.size(); ++i) {
        for (auto j = i - 1; j >= i - dp[i-1]; --j) {
            if (s[i] != s[j]) {
                ++dp[i];
            } else {
                break;
            }
        }
    }
    int result = 1;
    for (auto &k : dp) {
        if (k > result) {
            result = k;
        }
    }
    return result;
}