#include <iostream>
#include "MergeTwoSortedLists.h"
using namespace std;

int main() {
    ListNode l1(15), l2(13, &l1), l3(10, &l2), l4(9, &l3), l5(1, &l4);
    ListNode r1(12), r2(11, &r1), r3(7, &r2), r4(6, &r3), r5(4, &r4);
    MergeTwoSortedLists mts;
    ListNode* rslt = mts.mergeTwoLists(&l5, &r5);
    while (rslt) {
        cout << rslt->val << ' ';
        rslt = rslt->next;
    }
    return 0;
}