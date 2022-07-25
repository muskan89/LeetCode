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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return;
        }
        ListNode* ptr=head;
        stack<ListNode*>stk;
        int n=0;
        while(ptr!=NULL){
            stk.push(ptr);
            ptr=ptr->next;
            n++;
        }
        int y=n/2;
        ptr=head;
        for(int i=0;i<y;i++){
            ListNode* ele=stk.top();
            stk.pop();
            ele->next=ptr->next;
            ptr->next=ele;
            ptr=ptr->next->next;
        }
        ptr->next=NULL;
    }
};