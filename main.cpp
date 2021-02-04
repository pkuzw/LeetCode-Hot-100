#include <iostream>
#include "RegularExpressionMatch.h"
using namespace std;

int main() {
    string s = "ab";
    string p = ".*c";
    RegularExpressionMatch rem;
    bool result = rem.isMatch(s, p);
    cout << result << endl;
    return 0;
}