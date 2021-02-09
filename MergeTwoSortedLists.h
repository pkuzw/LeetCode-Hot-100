//
// Created by zhaowei01 on 2021/2/9.
//

/**
 * Definition for singly-linked list.
 **/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#ifndef LEETCODE_HOT_100_MERGETWOSORTEDLISTS_H
#define LEETCODE_HOT_100_MERGETWOSORTEDLISTS_H


class MergeTwoSortedLists {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};


#endif //LEETCODE_HOT_100_MERGETWOSORTEDLISTS_H
