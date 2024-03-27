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
    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *p = head, *c = head->next;
        while (c)
        {
            int temp = c->val;
            c->val = p->val;
            p->val = temp;
            p = c->next;
            c = p ? p->next : 0;
        }
        return head;
    }
};
