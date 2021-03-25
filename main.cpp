#include <iostream>
#include "FindRangeOfTargetInSortedArray.h"
using std::cout;
using std::endl;

int main() {
    FindRangeOfTargetInSortedArray fr;
    vector<int> nums = {1, 2, 3, 4};
    auto range = fr.searchRange(nums, 3);
    cout << range[0] << ' ' << range[1] << endl;
    return 0;
}