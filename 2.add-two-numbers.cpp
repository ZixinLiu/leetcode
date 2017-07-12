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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    	ListNode * temp1 = l1;
    	ListNode * temp2 = l2;
    	bool add1 = false;
    	int newval = temp1 -> val + temp2 -> val;
    	if(newval >= 10) {
    		// newval = newval % 10;
    		add1 = true;
    	}
    	ListNode * sum = new ListNode(newval % 10);
    	temp1 = temp1 -> next;
    	temp2 = temp2 -> next;
    	//ptr always points to the last node (not include nullptr)
    	ListNode * ptr = sum;

    	while(temp1 != nullptr || temp2 != nullptr || add1 == true) {
    		// case 1: temp1 == temp2 == null, add1 == true;
    		if(temp1 == nullptr && temp2 == nullptr) {
    			ListNode * temp = new ListNode(1);
    			add1 = false;
    			ptr -> next = temp;
    			ptr = temp;
    		} else {
	    		if(temp1 == nullptr && temp2 != nullptr) {
	    			newval = temp2 -> val + add1 * 1;
	    			temp2 = temp2 -> next;
	    		} 

	    		else if(temp1 != nullptr && temp2 == nullptr) {
	    			newval = temp1 -> val + add1 * 1;
	    			temp1 = temp1 -> next;
	    		}
	    		// both temp1 and temp2 are nullptrs
	    		else {
	    			newval = temp1 -> val + temp2 -> val + add1 * 1;
	    			temp1 = temp1 -> next;
	    			temp2 = temp2 -> next;
	    			
	    		}
	    		newval >= 10 ? add1 = true: add1 = false;
	    		ListNode * temp = new ListNode(newval % 10);
	    		ptr -> next = temp;
	    		ptr = temp;
    		}

    	}
    	return sum;
    	
        
    }
};