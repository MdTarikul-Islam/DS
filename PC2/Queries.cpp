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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL && tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_node(Node *&head, Node *&tail, int val)
{
    Node *tmp = head;
    if (head == NULL)
    {
        return;
    }
    for (int i = 1; i <= val - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    if (deleteNode == tail)
    {
        tail = tmp;
    }
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << "\n";
}

int size_of_SLL(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int query;
    cin >> query;
    while (query--)
    {
        int index, val;
        cin >> index >> val;
        int sz = size_of_SLL(head);

        if (index == 0)
        {
            insert_at_head(head, tail, val);
            print_linked_list(head);
        }
        else if (index == 1)
        {
            insert_at_tail(head, tail, val);
            print_linked_list(head);
        }
        else if (index == 2)
        {
            if (val == 0)
            {
                delete_head(head);
            }
            else if (sz > val)
            {
                delete_node(head, tail, val);
            }
            print_linked_list(head);
        }
        else
        {
            print_linked_list(head);
        }
    }
    return 0;
}