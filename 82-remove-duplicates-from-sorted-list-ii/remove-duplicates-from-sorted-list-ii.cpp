class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *prev = head;
        ListNode *cur = head;
        ListNode *next = cur->next;
        bool dupDetected = false;
        bool isHeadRepeted = false;
        while (cur)
        {
            if (next != NULL && (cur->val == next->val))
            {
                cur->next = next->next;
                next = cur->next;
                dupDetected = true;
            }
            else
            {
                if (dupDetected)
                {
                    if (prev == head && cur == head)
                        isHeadRepeted = true;

                    prev->next = next;
                    dupDetected = false;
                }
                else
                    prev = cur;

                cur = prev->next;
                if (cur != NULL)
                    next = cur->next;
            }
        }
        if (isHeadRepeted)
            head = head->next;

        return head;
    }
};