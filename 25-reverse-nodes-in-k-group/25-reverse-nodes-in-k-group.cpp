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
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* curr=head,*prev=NULL,*next=NULL;
        int num=k,cnt=0;
        ListNode* check=head;
        while(check!=NULL){
            cnt++;
            if(cnt>=k){
                break;
            }
            check=check->next;
        }
        if(cnt<k){
            return head;
        }
        while(curr!=NULL && num--){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head->next=reverseKGroup(curr,k);
        return prev;
    }
};