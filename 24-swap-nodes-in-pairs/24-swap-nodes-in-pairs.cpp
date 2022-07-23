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
        ListNode* curr=head,*prev=NULL,*nxt=NULL;
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
        nxt=curr->next;
        curr->next=prev;
        head->next=swapPairs(nxt);
        return curr;
    }
};