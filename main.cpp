#include <iostream>
#include "GenerateParenthesis.h"
using std::cout;
using std::endl;

int main() {
    int n = 4;
    GenerateParenthesis gp;
    vector<string> rslt = gp.generateParenthesis(n);
    for (auto &i : rslt) {
        cout << i << " ";
    }
    return 0;
}