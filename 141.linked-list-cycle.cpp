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

    	// prove that if there is a cycle in the linked list, they must meet
    	// there will not be the case that l2 next step is one step forwards than l1
    	// because they must meet before.

    	// one is move 1 step forwards, one is move 2 steps forwards
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