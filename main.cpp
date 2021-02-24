#include <iostream>
#include "NextPermutation.h"
using std::cout;
using std::endl;

int main() {
    vector<int> ivec = {1,2,3};
    NextPermutation np;
    np.nextPermutation(ivec);
    for (auto &k : ivec) {
        cout << k << ' ';
    }
    return 0;
}