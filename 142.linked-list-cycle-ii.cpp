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
	void detectCycleHelp(ListNode *head, ListNode * &meet) {
        ListNode * l1 = head;
        ListNode * l2 = head;
        if(head == nullptr) return;
        do{
        	l1 = l1 -> next;
        	l2 = l2 -> next;
        	if(l2 !=  nullptr) {
        		l2 = l2 -> next;
        		if(l1 == l2) {
        			meet = l1;
        			return;
        		}
        	}
        } while(l1 && l2);
    }

    ListNode *detectCycle(ListNode *head) {
    	ListNode * meet = nullptr;
    	// if they don't meet, means they don't have cycle, return nullptr
    	detectCycleHelp(head, meet);
    	if(meet == nullptr) return nullptr;

    	// if they meet, one ptr =  head, the other one =  meet;
    	// move in the same speed, they must meet
    	ListNode * t1 = head;
    	ListNode * t2 = meet;
    	while(t1 != t2) {
    		t1 = t1 -> next;
    		t2 = t2 -> next;
    	}
    	return t1;    
    }
};


//http://bangbingsyb.blogspot.com/2014/11/leetcode-linked-list-cycle-i-ii.html


