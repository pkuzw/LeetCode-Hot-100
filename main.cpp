#include <iostream>
#include "FindMedianSortedArray.h"
using namespace std;

int main() {
    vector<int> nums1 = {1, 2, 3, 7, 8, 9};
    vector<int> nums2 = {4, 5, 6};
    FindMedianSortedArray fms;
    double result = fms.findMedianSortedArrays(nums1, nums2);
    cout << "median number of two sorted array: " << result << endl;
    return 0;
}