class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp = head;
        int i = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            i++;
        }

        if (n == i)
        {
            ListNode *temp1 = head->next;
            delete temp;
            head = temp1;
        }

        n = i - n;
        i = 0;

        temp = head;
        while (temp != NULL)
        {
            if (i == n - 1)
            {
                cout << "OK" << endl;
                ListNode *temp1 = temp->next->next;
                delete temp->next;
                temp->next = temp1;
                break;
            }
            temp = temp->next;
            i++;
        }
        return head;
    }
};
