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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    	// using stack , but time complexity is O(m>n ? m:n), Space complexity is not O(1)
    	// ListNode * res = nullptr;
    	// if(headA == headB) return headA;
    	// stack<ListNode*> a;
    	// stack<ListNode*> b;
    	// ListNode * temp1 = headA;
    	// ListNode * temp2 = headB;

    	// while(temp1 != nullptr) {
    	// 	a.push(temp1);
    	// 	temp1 = temp1 -> next;
    	// }
    	// while(temp2 != nullptr) {
    	// 	b.push(temp2);
    	// 	temp2 = temp2 -> next;
    	// }

    	// while(!a.empty() && !b.empty()) {
    	// 	ListNode * topa = a.top();
    	// 	ListNode * topb = b.top();
    	// 	if(topa != topb) break;
    	// 	else {
    	// 		res = topa;
    	// 	}
    	// 	a.pop();
    	// 	b.pop();
    	// }
    	// return res;

    	// SMART SOLUTION, MKAE USE OF THE LENGTH DIFFERNCE OF TWO LINKED LISTS.
    	ListNode * temp1 = headA;
    	ListNode * temp2 = headB;

    	// always find the intersection, if there is not intersection, we can think of these
    	// two linked list intersect at nullptr
    	// when the lengths are different, one is move abs(m-n) "faster" than the other one, 
    	// when they move to another linked list, one must move abs(m - n)"slower" than the other one
    	// which means, they eventually will in the same sppeed, in this case , we can the intersection
    	// no intersection, return nullptr;
    	// faster :: make these two tail by tail, one is forward than the other  
    	// time complexity if O(m + n), space complexity if O(1)
    	while(temp1 != temp2) {
    		temp1 = temp1 ? temp1 -> next: headB;
    		temp2 = temp2 ? temp2 -> next: headA;
    	}
    	return temp1;
        
    }
};