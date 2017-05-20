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
    void deleteNode(ListNode* node) {
    	// to access the element of object given a pinter:  ->
    	// to access the element of object given the object: .
    	ListNode * ptr = node -> next;
    	node -> val = ptr -> val;
    	node -> next = ptr -> next;
    	delete ptr;
    	ptr = nullptr;
    }
};