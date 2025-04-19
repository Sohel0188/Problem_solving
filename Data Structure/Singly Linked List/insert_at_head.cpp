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
void insert_at_tail(Node *&head, int value){
    // cout<<"ok";
    // cout<<head<<" "<<value;
    Node * newNode = new Node(value);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node * tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;

};
void insert_at_head(Node *&head, int value){
    Node * newNode = new Node(value);
    newNode->next = head;
    head = newNode;
};
void print_linked_list(Node * head){
    Node * tmp = head;
    while (tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
};

int main(){
    Node * head = NULL;
    while(true){
    cout<<"Option 1:Insert at Tail"<<endl; 
    cout<<"Option 2:Insert at Head"<<endl; 
    // cout<<"Option 3:Insert at Any Position"<<endl; 
    cout<<"Option 4:Print at linked list"<<endl; 
    cout<<"Option 5:Tarminate"<<endl; 
    int opt;
    cin>>opt;
    if(opt==1){
        cout<<"Please Enter Any Value"<<endl;
        int val;
        cin>>val;
        insert_at_tail(head,val);
    }else if(opt==2){
        cout<<"Please Enter Any Value"<<endl;
        int val;
        cin>>val;
        insert_at_head(head,val);
    }else if(opt==4){
        print_linked_list(head);
    }else if(opt==5){
        break;
    }
}
    return 0;
}

