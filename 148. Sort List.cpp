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
    ListNode* mergeList(ListNode* l1, ListNode* l2){
        ListNode* merged = new ListNode();
        ListNode* head = merged;
        while(l1&&l2){
            if(l1->val < l2->val){
                merged->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            else{
                merged->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            merged = merged->next;
        }
        while(l1){
            merged->next = new ListNode(l1->val);
            l1 = l1->next;
            merged = merged->next;
        }
        while(l2){
            merged->next = new ListNode(l2->val);
            l2 = l2->next;
            merged = merged->next;
        }
        return head->next;
    }

    ListNode* sortList(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        while(temp){
            length++;
            temp = temp->next;
        }
        if(length<=1){
            return head;
        }
        
        ListNode* left = new ListNode();
        ListNode* topleft = left;
        ListNode* right = new ListNode();
        ListNode* topright = right;
        int index = 0;
        while(head){
            if(index<=((length-1)/2)){
                left->next = new ListNode(head->val);
                left = left->next;
            }
            else{
                right->next = new ListNode(head->val);
                right = right->next;
            }
            index++;
            head = head->next;
        }
        return mergeList(sortList(topleft->next),sortList(topright->next));
    }
};
