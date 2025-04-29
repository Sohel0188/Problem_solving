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
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;

    while (true)
    {
        cout << "\nMenu:\n";
        cout << "1. Insert into 1st Linked List\n";
        cout << "2. Insert into 2nd Linked List\n";
        cout << "3. Print 1st Linked List\n";
        cout << "4. Print 2nd Linked List\n";
        cout << "5. Terminate\n";
        cout << "Enter your option: ";

        int option;
        cin >> option;

        if (option == 1)
        {
            while (true)
            {
                cout << "Insert Value (To Stop, enter -1): ";
                int val;
                cin >> val;
                if (val == -1)
                    break;
                insert_at_tail(head1, val);
            }
        }
        else if (option == 2)
        {
            while (true)
            {
                cout << "Insert Value (To Stop, enter -1): ";
                int val;
                cin >> val;
                if (val == -1)
                    break;
                insert_at_tail(head2, val);
            }
        }
        else if (option == 3)
        {
            cout << "1st Linked List: ";
            print_linked_list(head1);
        }
        else if (option == 4)
        {
            cout << "2nd Linked List: ";
            print_linked_list(head2);
        }
        else if (option == 5)
        {
            cout << "Program terminated.\n";
            break;
        }
        else
        {
            cout << "Invalid option. Please try again.\n";
        }
    }

    return 0;
}
