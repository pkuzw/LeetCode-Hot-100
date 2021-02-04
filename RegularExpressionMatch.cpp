//
// Created by wayne on 2021/2/5.
//

#include "RegularExpressionMatch.h"

bool RegularExpressionMatch::isMatch(string s, string p) {
    if (s.empty() && !p.empty()) {
        return false;
    }
    decltype(p.size()) i = 0, j = 0;
    while (j != s.size() || i != p.size()) {
        if (i < p.size() && s[j] == p[i]) {
            ++i;
            ++j;
            continue;
        } else {
            if (i >= p.size()) {
                return false;
            }
            if (p[i] == '.') {
                ++i;
                ++j;
                continue;
            }
            if (p[i] == '*' && i >= 1) {
                if ((j < s.size() && p[i-1] == s[j]) || p[i-1] == '.') {
                    ++j;
                    continue;
                } else {
                    ++i;
                    if ((j < s.size() && p[i] == s[j]) || p[i] == '.') {
                        ++i;
                        ++j;
                        continue;
                    } else {
                        return false;
                    }
                }
            }
            if (i + 1 < p.size() && p[i+1] == '*') {
                i += 2;
                continue;
            }
            return false;
        }
    }
    return true;
}
