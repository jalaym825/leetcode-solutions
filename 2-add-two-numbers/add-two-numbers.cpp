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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        string n1;
        string n2;
        string ans;

        while (l1 != NULL)
        {
            n1 += to_string(l1->val);
            l1 = l1->next;
        }

        while (l2 != NULL)
        {
            n2 += to_string(l2->val);
            l2 = l2->next;
        }

        if (n2.size() > n1.size())
        {
            string temp = n1;
            n1 = n2;
            n2 = temp;
        }

        int n1Size = n1.size() - 1;
        int n2Size = n2.size() - 1;

        int sum = 0;
        int carry = 0;

        for (int i = 0; i <= n1Size; i++)
        {
            sum = (n1[i] - '0') + (i < n2.size() ? (n2[i] - '0') : 0) + carry;
            ans += (sum % 10) + '0';
            carry = sum / 10;
            sum = 0;
        }
        if (carry > 0)
            ans += (carry + '0');

        ListNode *head = NULL;
        int length = ans.size();
        for (int i = 0; i < length; i++)
        {
            ListNode *temp = new ListNode(ans[length - i - 1] - '0');
            if (head == NULL)
                temp->next = NULL;
            else
                temp->next = head;
            head = temp;
        }
        return head;
    }
};