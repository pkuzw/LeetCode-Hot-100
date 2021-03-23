#include <iostream>
#include "SearchRotatedSortedArray.h"
using std::cout;
using std::endl;

int main() {
    SearchRotatedSortedArray srsa;
    vector<int> nums = {1, 2, 3};
    cout << srsa.search(nums, 2) << endl;
    return 0;
}