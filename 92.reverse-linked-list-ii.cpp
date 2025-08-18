/*
 * @lc app=leetcode id=92 lang=cpp
 *
 * [92] Reverse Linked List II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      
        ListNode *current = head;
        ListNode *prev = NULL;
        ListNode *next = NULL;
        for (int i = 1; i < left; i++) {
            prev = current;
            current = current->next;
        }
        ListNode *start = prev;
        ListNode *end = current;
        for (int i = 0; i < right - left + 1; i++) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        if (start != NULL) {
            start->next = prev;
        } else {
            head = prev;
        }
        end->next = current;
        return head;
    }
};
// @lc code=end

