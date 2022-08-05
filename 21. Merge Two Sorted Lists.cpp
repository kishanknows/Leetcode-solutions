/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* merged = new ListNode();
        ListNode* head = merged;
        while(list1&&list2){
            merged->next = new ListNode();
            if(list1->val<list2->val){
                merged->next->val = list1->val;
                list1 = list1->next;
                merged = merged->next;
            }
            else{
                merged->next->val = list2->val;
                list2 = list2->next;
                merged = merged->next;
            }
        }
        while(list1){
            merged->next = new ListNode();
            merged->next->val = list1->val;
            list1 = list1->next;
            merged = merged->next;
        }
        while(list2){
            merged->next = new ListNode();
            merged->next->val = list2->val;
            list2 = list2->next;
            merged = merged->next;
        }
        return head->next; 
    }
};
