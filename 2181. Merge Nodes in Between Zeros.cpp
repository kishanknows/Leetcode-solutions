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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* sums = new ListNode();
        ListNode* top = sums;
        int sum=0;
        ListNode* temp=head->next;
        while(temp){
            if(temp->val!=0){
                sum += temp->val;
            }
            else{
                sums->next = new ListNode(sum);
                sums = sums->next;
                sum=0;
            }
            temp = temp->next;
        }
       return top->next; 
    }
};
