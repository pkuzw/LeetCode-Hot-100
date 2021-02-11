//
// Created by zhaowei01 on 2021/2/10.
//

#include "GenerateParenthesis.h"

vector<string> GenerateParenthesis::generateParenthesis(int n) {
    vector<vector<string>> dp(n+2);
    dp[0] = vector<string>({""});
    dp[1] = vector<string>({"()"});
    if (n == 1 || n == 0) {
        return dp[n];
    }
    for (auto i = 2; i <= n; ++i) {
        vector<string> dp_i;
        for (auto j = 0; j != i; ++j) {
            for (string &p : dp[j]) {
                for (string &q : dp[i-j-1]) {
                    string t = "(" + p + ")" + q;
                    dp[i].push_back(t);
                }
            }
        }
    }
    return dp[n];
}
