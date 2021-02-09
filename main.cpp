#include <iostream>
#include "ValidParentheses.h"
using namespace std;

int main() {
    ValidParentheses vp;
    string s = "[]{}([][[[(){}]]])";
    auto result = vp.isValid(s);
    cout << result << endl;
    return 0;
}