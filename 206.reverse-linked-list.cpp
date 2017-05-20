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
    ListNode* reverseList(ListNode* head) {
    	stack<int> s;
    	ListNode * ptr = head;
    	ListNode * temp = head;
    	while(ptr != nullptr) {
    		s.push(ptr -> val);
    		ptr = ptr -> next;
    	}
    	while(temp != nullptr) {
    		temp -> val = s.top();
    		s.pop();
    		temp = temp -> next;
    	}
    	return head;
        
    }
};