#include <iostream>

#include "LengthOfLongestSubstring.h"

using namespace std;

int main() {
    LengthOfLongestSubstring lls;
    string s = "helloworld";
    int result  = lls.lengthOfLongestSubstring(s);
    cout << result << endl;
    return 0;
}