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
    ListNode* swapPairs(ListNode* head) {
    	ListNode * temp = head;
    	ListNode * ptr1 = nullptr;
    	ListNode * ptr2 = nullptr;
    	ListNode * odd = head;
    	int count = 0;
    	while(temp != nullptr) {
    		count++;
    		if(temp -> next != nullptr) {
    			ptr1 =  temp;
    			ptr2 = temp -> next;
    			ptr1 -> next = ptr2 -> next;
    			ptr2 -> next = ptr1;
    			// connect between pairs, if it is the first pair skip
    			if(count != 1) odd -> next = ptr2;
    			if(count == 1) {
    				head = ptr2;
    			}
    		}
    		temp = temp -> next;
    		odd = ptr1;

    	}
    	return head;
        
    }
};