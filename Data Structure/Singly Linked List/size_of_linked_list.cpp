#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = (val);
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
int linked_size(Node *head){
    Node *tmp = head;
    int counter=0;
    while(tmp!=NULL){
        counter++;
        tmp=tmp->next;
    }
    return counter;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout<< "Option 1: Insert at tail"<<endl;
        cout<< "Option 2: Print Linked List"<<endl;
        cout<< "Option 3: Size of Linked List"<<endl;
        cout<< "Option 4: Tarminate"<<endl;

        int Opt;
        cin >> Opt;
        if (Opt == 1)
        {
            cout << "Enter values to insert (end with -1)" << endl;
            while (true)
            {   int value;
                cin >> value;
                insert_at_tail(head, value);
                if (value == -1)
                {
                    break;
                }
                
            }
        }else if(Opt==2){
            print_linked_list(head);
        }else if(Opt==3){
            int size = linked_size(head);
            cout<<"Size of Linked List: "<<size<<endl;
        }
        else if(Opt==4){
            break;
        }else
            cout<<"Invalid Index"<<endl;
    }

    return 0;
}
