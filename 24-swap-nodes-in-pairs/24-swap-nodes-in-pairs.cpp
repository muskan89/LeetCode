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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* prev=NULL,*curr=NULL,*nxt=NULL,*before=NULL;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        before=dummy;
        while(head!=NULL){
            if(head->next==NULL){
                break;
            }
            curr=head;
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
            nxt=curr->next;
            curr->next=prev;
            head->next=nxt;
            before->next=curr;
            before=head;
            head=before->next;
            prev=NULL;    
        }
        return dummy->next;
    }
};