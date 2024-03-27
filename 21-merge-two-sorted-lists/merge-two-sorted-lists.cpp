class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (l1 == NULL)
            return l2;

        if (l2 == NULL)
            return l1;

        if (l2->val < l1->val)
        {
            ListNode *temp = l1;
            l1 = l2;
            l2 = temp;
        }
        ListNode *head = l1;
        ListNode *prev=l1;
        while (l1 != NULL && l2 != NULL)
        {
            while (l1 != NULL && l2 != NULL && l1->val <= l2->val)
            {
                prev = l1;
                l1 = l1->next;
            }
            prev->next = l2;
            swap(l2, l1);
            prev = l1;
            if (l1->next != NULL)
                l1 = l1->next;
        }
        return head;
    }
};
