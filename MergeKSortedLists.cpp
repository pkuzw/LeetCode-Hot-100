//
// Created by 86138 on 2021/2/12.
//

#include "MergeKSortedLists.h"
#include <vector>


ListNode* MergeKSortedLists::mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (!l1) {
        return l2;
    }
    if (!l2) {
        return l1;
    }
    ListNode* iter1 = l1, *iter2 = l2;
    ListNode* iter = iter1;
    bool tag = false; // false: iter is on list 1; true: iter is on list 2.
    if (l1->val <= l2->val) {
        iter = iter1;
        tag = false;
    } else {
        iter = iter2;
        tag = true;
    }
    while (iter->next) {
        if (tag == false) {
            if (iter->val == iter->next->val) {
                iter = iter->next;
                iter1 = iter1->next;
            } else {
                if (iter->next->val > iter2->val) {
                    iter1 = iter->next;
                    iter->next = iter2;
                    iter = iter->next;
                    tag = !tag;
                } else {
                    iter = iter->next;
                    iter1 = iter1->next;
                }
            }
        }
        else {
            if (iter->val == iter->next->val) {
                iter = iter->next;
                iter2 = iter2->next;
            } else {
                if (iter->next->val > iter1->val) {
                    iter2 = iter->next;
                    iter->next = iter1;
                    iter = iter->next;
                    tag = !tag;
                } else {
                    iter = iter->next;
                    iter2 = iter2->next;
                }
            }
        }
    }
    iter->next = tag ? iter1 : iter2;
    return l1->val <= l2->val ? l1 : l2;
}

ListNode* MergeKSortedLists::mergeKLists(vector<ListNode*>& lists) {
    if (lists.empty()) {
        return nullptr;
    }
    while (lists.size() > 1) {
        ListNode* l1 = lists.back();
        lists.pop_back();
        ListNode* l2 = lists.back();
        lists.pop_back();
        ListNode* tmp = mergeTwoLists(l1, l2);
        lists.push_back(tmp);
    }
    return lists.front();
}
