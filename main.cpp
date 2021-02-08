#include <iostream>
#include "LetterCombinationOfPhoneNumber.h"
using namespace std;

int main() {
    LetterCombinationOfPhoneNumber lcp;
    string digits = "222";
    auto result = lcp.letterCombinations(digits);
    for (auto &i : result) {
        cout << i << endl;
    }
    return 0;
}