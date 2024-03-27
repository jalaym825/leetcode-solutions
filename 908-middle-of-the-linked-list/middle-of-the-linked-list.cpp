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
    ListNode *middleNode(ListNode *head)
    {
        int nodes = 0;
        ListNode *temp = head;
        ListNode *midNode;
        while (temp != NULL)
        {
            temp = temp->next;
            nodes++;
        }
        int mid = nodes / 2 + 1;
        int n = 0;
        temp = head;
        while (temp != NULL)
        {
            n++;
            if (n == mid)
            {
                midNode = temp;
                break;
            }
            temp = temp->next;
        }
        return midNode;
    }
};