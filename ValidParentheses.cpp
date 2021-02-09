//
// Created by zhaowei01 on 2021/2/9.
//

#include <stack>
#include "ValidParentheses.h"

using namespace std;

bool ValidParentheses::isValid(string s) {
    if (s.size() % 1) {
        return false;
    }
    stack<char> stk;
    for (auto &i : s) {
        if (i == '{' || i == '[' || i == '(') {
            stk.push(i);
        } else if (i == '}') {
            if (!stk.empty() && stk.top() == '{') {
                stk.pop();
            } else {
                return false;
            }
        } else if (i == ']') {
            if (!stk.empty() && stk.top() == '[') {
                stk.pop();
            } else {
                return false;
            }
        } else if (i == ')') {
            if (!stk.empty() && stk.top() == '(') {
                stk.pop();
            } else {
                return false;
            }
        }
    }
    return stk.empty() ? true : false;
}
