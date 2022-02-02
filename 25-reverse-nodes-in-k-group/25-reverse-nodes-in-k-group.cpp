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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy=new ListNode(0),*before=NULL;
        dummy->next=head;
        before=dummy;
        ListNode* after=head,*curr=NULL,*prev=NULL,*nxt=NULL;
        while(true){
            ListNode* cursor=after;
            for(int i=0;i<k;i++){
                if(cursor==NULL){
                    return dummy->next;
                }
                cursor=cursor->next;
            }
            curr=after;
            for(int i=0;i<k;i++){
                nxt=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nxt;
            }
            //cout<<before->val<<"\n";
            after->next=curr;
            before->next=prev;
            before=after;
            after=curr;
        }
        return dummy->next;
    }
};