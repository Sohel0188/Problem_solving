#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node * next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node * temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    
}
void check_duclicate_value(Node * head){
    Node * temp = head;
    bool flag = false;
    for(Node * i = temp ; i != NULL; i=i->next){
        for(Node * j = i->next; j!= NULL; j = j->next){
            if(i->val == j->val){
                flag = true;
            }
        }
    }
   if(flag == true){
    cout<<"YES";
   }else cout<<"NO";
}
int main(){
    Node * head = NULL;
    while(true){
        int val;
        cin>>val;
        insert_at_tail(head,val);
        if(val == -1){
            break;
        }

    }
    check_duclicate_value(head);
    return 0;
}

