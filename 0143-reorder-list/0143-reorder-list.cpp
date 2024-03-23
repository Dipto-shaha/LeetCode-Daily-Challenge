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
    ListNode* lastNode(ListNode* head) {
        if (!head || !head->next) return head; 
        while (head->next->next) {
            head = head->next;
        }
        ListNode* last = head->next;
        head->next = nullptr;
        return last;
    }
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        ListNode* temp = head;
        ListNode* odd = head,*last;

        while (temp->next) {
            odd = temp->next; // odd points to the next node
            last=lastNode(odd);
            temp->next = last; // breaking the last node from the first half
            if (odd == last) break; // if odd is the last node, break
            temp->next->next = odd; // pointing the next of the last node to odd (which is the next node)
            temp = odd; // moving temp to the next node (odd)
        }
    }
};