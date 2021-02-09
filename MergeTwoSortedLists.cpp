//
// Created by zhaowei01 on 2021/2/9.
//

#include "MergeTwoSortedLists.h"

ListNode* MergeTwoSortedLists::mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (!l1) {
        return l2;
    }
    if (!l2) {
        return l1;
    }
    ListNode* iter1_pre = new ListNode(0, l1), *iter2_pre = new ListNode(0, l2);
    ListNode* iter1 = iter1_pre, *iter2 = iter2_pre;
    ListNode* iter1_nxt = l1->next, *iter2_nxt = l2->next;
    while (iter1->next && iter2->next) {
        if (iter1_nxt->val < iter2_nxt->val) {
            if (iter2->val <= iter1->val) {
                iter2->next = iter1;
            }
            iter2 = iter2_nxt;
            iter1 = iter1->next;
            iter1_nxt = iter1->next;
        } else {
            if (iter1->val <= iter2->val) {
                iter1->next = iter2;
            }
            iter1 = iter1_nxt;
            iter2 = iter2->next;
            iter2_nxt = iter2->next;

        }
    }
    if (iter1->next && iter2) {
        iter2->next = iter1;
        return l1->val < l2->val ? l1 : l2;
    }
    if (iter1->val <= iter2->val) {
        iter1->next = iter2;
    } else {
        iter2->next = iter1;
    }
    return l1->val < l2->val ? l1 : l2;
}