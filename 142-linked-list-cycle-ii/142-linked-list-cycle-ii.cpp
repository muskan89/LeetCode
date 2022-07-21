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
        ListNode* one=head,*two=head;
        if(head==NULL){
            return NULL;
        }
        if(head->next == NULL){
            return NULL;
        }
        if(head->next->next == NULL){
            return NULL;
        }
        one=one->next;
        two=one->next;
        while(two!=NULL && one != two){
            if(one)
                one=one->next;
            if(two)
                two=two->next;
            if(two)
                two=two->next;        
        }
        one=head;
        if(two!=NULL){
            while(one != two){
                one=one->next;
                two=two->next;
            }
            return one;
        }
        return NULL;
    }
};