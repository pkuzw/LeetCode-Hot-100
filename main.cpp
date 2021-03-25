#include <iostream>
#include "FindRangeOfTargetInSortedArray.h"
using std::cout;
using std::endl;

int main() {
    FindRangeOfTargetInSortedArray fr;
    vector<int> nums = {};
    auto range = fr.searchRange(nums, 8);
    cout << range[0] << ' ' << range[1] << endl;
    return 0;
}