//
// Created by wayne on 2021/2/4.
//

#ifndef LEETCODE_HOT_100_LONGESTPALINDROME_H
#define LEETCODE_HOT_100_LONGESTPALINDROME_H

#include <string>

using namespace std;

class LongestPalindrome {
public:
    string longestPalindrome(string s) {
        if (s.empty() || s.size() == 1) {
            return s;
        }
        vector<int> dp1(s.size(), 1); // the length of palindrome is odd.
        vector<int> dp2(s.size(), 1); // the length of palindrome is even.
        for (auto i = 0; i < s.size(); ++i) {
            auto j = 1, k = 1;
            for (j = 1; i - j >= 0 && i + j < s.size(); ++j) {
                if (s[i-j] != s[i+j]) {
                    break;
                }
            }
            dp1[i] = (j - 1) * 2 + 1;
            for (k = 1; i - k + 1 >= 0 && i + k < s.size(); ++k) {
                if (s[i-k+1] != s[i+k]) {
                    break;
                }
            }
            dp2[i] = (k - 1) * 2;
        }
        int longest_length1 = 1, longest_length2 = 1;
        auto center_index1 = 0, center_index2 = 0;
        for (auto i = 0; i < dp1.size(); ++i) {
            if (dp1[i] > longest_length1) {
                longest_length1 = dp1[i];
                center_index1 = i;
            }
            if (dp2[i] > longest_length2) {
                longest_length2 = dp2[i];
                center_index2 = i;
            }
        }
        string lsp1 = s.substr(center_index1 - (longest_length1 / 2), longest_length1);
        string lsp2 = s.substr(center_index2 - (longest_length2 / 2) + 1, longest_length2);
        return lsp1.size() >= lsp2.size() ? lsp1 : lsp2;
    }
};


#endif //LEETCODE_HOT_100_LONGESTPALINDROME_H
