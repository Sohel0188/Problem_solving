#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
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
void print_middle_element(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    tmp = head;
    // cout<<"count value is :"<< count<<endl;
    // int mid_index = ceil(count/2);
    int mid = count / 2;
    
    // cout<<mid_value<<endl;
    while(mid--){
        tmp = tmp->next;
    }
    cout<<"Mid Value is : "<<tmp->val<<endl;
    
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout << "The linked list is : ";
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
        cout << "Opt 1: Insert at tail" << endl;
        cout << "Opt 2: Print Linked list" << endl;
        cout << "Opt 3: Print middle element" << endl;
        cout << "Opt 4: Tarminate" << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            cout << " Enter Linklist" << endl;
            while (true)
            {
                int val;
                cin >> val;
                if (val == -1)
                    break;
                insert_at_tail(head, val);
            }
        }
        else if (opt == 2)
        {
            print_linked_list(head);
        }
        else if (opt == 3)
        {
            print_middle_element(head);
        }
        else if (opt == 4)
        {
            break;
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }
    return 0;
}
