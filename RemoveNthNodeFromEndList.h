//
// Created by wayne on 2021/2/8.
//

#ifndef LEETCODE_HOT_100_REMOVENTHNODEFROMENDLIST_H
#define LEETCODE_HOT_100_REMOVENTHNODEFROMENDLIST_H


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class RemoveNthNodeFromEndList {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n);

};


#endif //LEETCODE_HOT_100_REMOVENTHNODEFROMENDLIST_H
