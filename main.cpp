#include <iostream>
#include "LongestValidParentheses.h"
using std::cout;
using std::endl;

int main() {
    LongestValidParentheses lvp;
    string s = "(()";
    cout << lvp.longestValidParentheses(s);
    return 0;
}