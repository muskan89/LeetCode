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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return head;
        }
        ListNode* first=head,*second=head;
        do{
            first=first->next;
            second=second->next;
            if(second != NULL){
                second=second->next;
            }
        }while(second!=NULL && first != second);
        if(second==NULL){
            return second;
        }
        first=head;
        while(first!=second){
            first=first->next;
            second=second->next;
        }
        return first;
    }
};