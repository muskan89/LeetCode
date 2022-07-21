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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        ListNode* l3=NULL,*temp=NULL;
        int carry=0;
        while(l1 != NULL && l2 != NULL){
            int a=(l1->val) + (l2->val) + carry;
            if(temp==NULL){
                temp=new ListNode(a%10);
                l3=temp;
            }else{
                temp->next=new ListNode(a%10);
                temp=temp->next;
            }
            carry=a/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1 != NULL){
            int a=(l1->val)  + carry;
            if(temp==NULL){
                temp=new ListNode(a%10);
                l3=temp;
            }else{
                temp->next=new ListNode(a%10);
                temp=temp->next;
            }
            carry=a/10;
            l1=l1->next;
        }
        while(l2 != NULL){
            int a=(l2->val) + carry;
            if(temp==NULL){
                temp=new ListNode(a%10);
                l3=temp;
            }else{
                temp->next=new ListNode(a%10);
                temp=temp->next;
            }
            carry=a/10;
            l2=l2->next;
        }
        while(carry>0){
            int a=carry;
            if(temp==NULL){
                temp=new ListNode(a%10);
                l3=temp;
            }else{
                temp->next=new ListNode(a%10);
                temp=temp->next;
            }
            carry=a/10;
        }
        return l3;
        
    }
};