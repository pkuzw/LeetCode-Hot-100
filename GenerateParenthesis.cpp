//
// Created by zhaowei01 on 2021/2/10.
//

#include <set>
#include "GenerateParenthesis.h"

using std::set;

vector<string> GenerateParenthesis::generateParenthesis(int n) {
    string parenthesis_pair = "()";
    vector<vector<string>> vec_vec_str;
    vector<string> vec_str0;
    vec_str0.push_back(parenthesis_pair);
    vec_vec_str.push_back(vec_str0);
    for (int i = 0; i != n; ++i) {
        set<string> set_str;
        for(auto j = 0; j != vec_vec_str[i].size(); ++j) {
            for (auto k = 0; k != vec_vec_str[i][j].size(); ++k) {
                string tmp = vec_vec_str[i][j].substr(0, k) +
                        parenthesis_pair +
                        vec_vec_str[i][j].substr(k);
                set_str.insert(tmp);
            }
        }
        vector<string> vec_str(set_str.begin(), set_str.end());
        vec_vec_str.push_back(vec_str);
    }
    return vec_vec_str[n-1];
}
