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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
     //    // corner case
     //    if(l1 == nullptr) return l2;
     //    else if(l2 == nullptr) return l1;
     //    // none of them are nullptr
     //    else {
     //        ListNode *result = nullptr;
     //        ListNode *head = result;
     //        ListNode *temp1 = l1;
     //        ListNode *temp2 = l2;
     //        while(temp1 != nullptr && temp2 != nullptr){
     //            ListNode *temp;
     //            if(temp1 -> val < temp2 -> val) {
     //                temp = new ListNode(temp1 -> val);
     //                temp1 = temp1 -> next;
     //            } else {
     //                temp = new ListNode(temp2 -> val);
     //                temp2 = temp2 -> next;
     //            }
                
     //            if (result == nullptr) {
     //                result = temp;
     //                head = result;
     //            }
     //            else {
     //                result -> next = temp;
     //                result = temp;
     //            }
     //        }
     //        // end of l2
     //        if(temp1) {
     //            result -> next = temp1;
     //        }
     //        else {
     //            result -> next = temp2;
     //        }
     //        return head;
     //    }   


    	// // better solution without new memory
    	// ListNode * l3 = new ListNode(-1);
    	// ListNode * t3 = l3;

    	// while(l1 && l2) {
    	// 	if(l1 -> val <=  l2 -> val){
    	// 		t3 -> next = l1;
    	// 		l1 = l1 -> next;
    	// 	} else {
    	// 		t3 -> next = l2;
    	// 		l2 = l2 -> next;
    	// 	}
    	// 	t3 = t3 -> next;
    	// 	t3 -> next = nullptr;
    	// }

    	// t3 -> next = l1 ? l1:l2;
    	// ListNode *temp = l3;
    	// l3 = l3 -> next;
    	// delete temp;
    	// return l3;

    	// recursive solution
    	if(l1 == nullptr) return l2;
    	if(l2 == nullptr) return l1;
    	if(l1 -> val < l2 -> val) {
    		l1 -> next = mergeTwoLists(l1 -> next, l2);
    		return l1;
    	} else {
    		l2 -> next = mergeTwoLists(l2 -> next, l1);
    		return l2;
    	}
    }
};