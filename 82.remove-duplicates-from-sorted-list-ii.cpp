/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
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
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *ptr = head;

        while (ptr != NULL)
        {
            bool dup = false;
            while (ptr->next != NULL && ptr->val == ptr->next->val)
            {
                dup = true;
                ptr = ptr->next; 
            }
            if (dup)
            {
                if (prev == NULL)
                {
                    head = ptr->next; 
                }
                else
                {
                    prev->next = ptr->next; 
                }
            }
            else
            {
                prev = ptr; 
            }
            ptr = ptr->next;
        }
        return head;
    }
};
// @lc code=end
