#include <iostream>
#include "LongestPalindrome.h"
using namespace std;

int main() {
    string s = "dabccbadefgagfedabccbadjsl";
    LongestPalindrome lsp;
    string result = lsp.longestPalindrome(s);
    cout << "longest palindrome substring: " << result << endl;
    return 0;
}