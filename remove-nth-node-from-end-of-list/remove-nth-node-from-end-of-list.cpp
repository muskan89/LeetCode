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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* one=head,*two=head;
        if(head==NULL||(head->next==NULL && n==1)){
            return NULL;
        }
        if(n==1){
            two=one->next;
            while(two!=NULL && two->next!=NULL){
                two=two->next;
                one=one->next;
            }
            one->next=NULL;
            delete(two);
            return head;
        }
        int num=n-1;
        while(num--){
            two=two->next;
        }
        
        while(two->next != NULL){
            one=one->next;
            two=two->next;
        }
        two=one->next;
        while(two!=NULL && two->next != NULL){
            one->val=two->val;
            one=one->next;
            two=two->next;
        }
        one->val=(two!=NULL) ? two->val: 0;
        one->next=NULL;
        delete(two);
        return head;
    }
};