//
// Created by wayne on 2021/2/8.
//

#include <algorithm>
#include <unordered_map>
#include "LetterCombinationOfPhoneNumber.h"

using namespace std;

vector<string> LetterCombinationOfPhoneNumber::letterCombinations(
        string digits) {
    unordered_map<char, string> dict = {make_pair('2', "abc"),
                                          make_pair('3', "def"),
                                          make_pair('4', "ghi"),
                                          make_pair('5', "jkl"),
                                          make_pair('6', "mno"),
                                          make_pair('7', "pqrs"),
                                          make_pair('8', "tuv"),
                                          make_pair('9', "wxyz")};

    vector<string> vec_str;
    if (digits.empty()) {
        return vec_str;
    }
    for (auto i = 0; i != dict[digits[0]].size(); ++i) {
        string tmp(digits.size(), ' ');
        tmp[0] = dict[digits[0]][i];
        if (digits.size() > 1) {
            for (auto j = 0; j != dict[digits[1]].size(); ++j) {
                tmp[1] = dict[digits[1]][j];
                if (digits.size() > 2) {
                    for (auto k = 0; k != dict[digits[2]].size(); ++k) {
                        tmp[2] = dict[digits[2]][k];
                        if (digits.size() > 3) {
                            for (auto l = 0; l != dict[digits[3]].size(); ++l) {
                                tmp[3] = dict[digits[3]][l];
                                vec_str.push_back(tmp);
                            }
                        } else {
                            vec_str.push_back(tmp);
                        }
                    }
                } else {
                    vec_str.push_back(tmp);
                }
            }
        } else {
            vec_str.push_back(tmp);
        }
    }
    return vec_str;
}
