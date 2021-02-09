#include <iostream>
#include "MergeTwoSortedLists.h"
using namespace std;

int main() {
    ListNode l1(10), l2(7, &l1), l3(4, &l2);
    ListNode r1(11), r2(10, &r1), r3(8, &r2), r4(6, &r3), r5(4, &r4);
    MergeTwoSortedLists mts;
    ListNode* rslt = mts.mergeTwoLists(&l3, &r5);
    while (rslt) {
        cout << rslt->val << ' ';
        rslt = rslt->next;
    }
    return 0;
}