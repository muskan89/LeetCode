/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL){
            return root;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            while(size--){
                Node* w=q.front();
                if(w->left){
                    q.push(w->left);
                }
                if(w->right){
                    q.push(w->right);
                }
                q.pop();
                if(size==0){
                    w->next=NULL;
                }else{
                    w->next=q.front();
                }
            }
        }
        return root;
    }
};