#include <iostream>

#include "TwoSum.h"

using namespace std;

int main() {
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {4, 5, 6};
    TwoSum ts;
    vector<int> result = ts.twoSum(nums1, 5);
    cout << result[0] << result[1];
    return 0;
}