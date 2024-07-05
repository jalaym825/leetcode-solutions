class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
            return {-1, -1};
        }

        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* next = curr->next;
        
        int first = -1;
        int last = -1;
        int minDist = INT_MAX;
        int index = 1;
        
        while (next) {
            if ((curr->val > prev->val && curr->val > next->val) || 
                (curr->val < prev->val && curr->val < next->val)) {
                
                if (first == -1) {
                    first = index;
                } else {
                    minDist = min(minDist, index - last);
                }
                last = index;
            }
            prev = curr;
            curr = next;
            next = next->next;
            index++;
        }
        
        if (first == last) {
            return {-1, -1};
        }
        
        return {minDist, last - first};
    }
};
