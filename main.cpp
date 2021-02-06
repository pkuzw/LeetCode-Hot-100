#include <iostream>
#include "RegularExpressionMatch.h"
using namespace std;

int main() {
    string s = "aab", p = "a*b*c";
    RegularExpressionMatch rem;
    bool is_match = rem.isMatch(s, p);
    cout << "is match: " << is_match << endl;
    return 0;
}