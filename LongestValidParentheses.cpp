//
// Created by wayne on 2021/3/2.
//

#include "LongestValidParentheses.h"

int LongestValidParentheses::longestValidParentheses(string s) {
    if (s.empty() || s.size() == 1) {
        return 0;
    }
    unsigned left_parenthese_count = 0, right_parenthese_count = 0;
    unsigned max_valid_len = 0;
    for (auto i = 0; i != s.size(); ++i) {
        if (s[i] == '(') {
            ++left_parenthese_count;
        } else {
            ++right_parenthese_count;
        }
        if (left_parenthese_count == right_parenthese_count) {
            max_valid_len = left_parenthese_count * 2 > max_valid_len ?
                    left_parenthese_count * 2 : max_valid_len;
        }
        if (left_parenthese_count < right_parenthese_count) {
            left_parenthese_count = right_parenthese_count = 0;
        }
    }
    left_parenthese_count = 0;
    right_parenthese_count = 0;
    for (auto i = s.size() - 1; i != 0; --i) {
        if (s[i] == '(') {
            ++left_parenthese_count;
        } else {
            ++right_parenthese_count;
        }
        if (left_parenthese_count == right_parenthese_count) {
            max_valid_len = left_parenthese_count * 2 > max_valid_len ?
                            left_parenthese_count * 2 : max_valid_len;
        }
        if (left_parenthese_count > right_parenthese_count) {
            left_parenthese_count = right_parenthese_count = 0;
        }
    }
    return max_valid_len;
}
