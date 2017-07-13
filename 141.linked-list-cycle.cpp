/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * l1 = head;
        ListNode * l2 = head;
        if(head == nullptr) return false;

        do {
        	l1 = l1 -> next;
        	l2 = l2 -> next;
        	if(l2 != nullptr) {
        		l2 = l2 -> next;
        		if(l1 == l2) return true;
        	}
        	
        } while(l1 && l2);

        return false; 
    }
};