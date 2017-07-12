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
    	stack<int> list1;
    	stack<int> list2;

    	ListNode * t1 = l1;
    	ListNode * t2 = l2;

    	while(t1 != nullptr) {
    		list1.push(t1 -> val);
    		t1 = t1 -> next;
    	}
    	while(t2 != nullptr) {
    		list2.push(t2 -> val);
    		t2 = t2 -> next;
    	}

    	bool add1 = false;
    	ListNode * sum = nullptr;

    	while(!list1.empty() || !list2.empty()) {
    		int newval = 0;
    		if(!list1.empty() && !list2.empty()) {
    			newval =  list1.top() + list2.top() + add1 * 1;
    			list1.pop();
    			list2.pop();
    		} else if(list1.empty() && !list2.empty()) {
    			newval = list2.top() + add1 * 1;
    			list2.pop();
    		} else {
    			newval = list1.top() + add1 * 1;
    			list1.pop();
    		}

    		ListNode * temp = new ListNode(newval % 10);
    		newval >= 10? add1 = true: add1 = false;
    		temp -> next = sum;
    		sum = temp;
    	}

    	if(add1 == true) {
    		ListNode * front = new ListNode(1);
    		front -> next = sum;
    		sum = front;
    	}
    	return sum;
    }
};