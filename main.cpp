#include <iostream>
#include "MergeTwoSortedLists.h"
using namespace std;

int main() {
    ListNode l1(4), l2(2, &l1), l3(2, &l2), l4(1, &l3), l5(1, &l4);
    ListNode r1(3), r2(2, &r1), r3(2, &r2), r4(1, &r3), r5(1, &r4), r6(1, &r5);
    MergeTwoSortedLists mts;
    ListNode* rslt = mts.mergeTwoLists(&l5, &r6);
    while (rslt) {
        cout << rslt->val << ' ';
        rslt = rslt->next;
    }
    return 0;
}