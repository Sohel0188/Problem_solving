#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node * next;
        Node * prev;
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void insert_at_any_posision(Node *head, int pos, int value){
    Node * newNode = new Node(value);
    Node * tmp = head;
    for(int i=1;i<= pos-1;i++){
        tmp = tmp->next;
    }
     newNode->next = tmp->next;
     tmp->next = newNode;
     newNode->prev = tmp;
     newNode->next->prev = newNode; 
}
int main(){
    
    return 0;
}

