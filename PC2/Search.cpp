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

void print_linked_list(Node *head, int search)
{
    int track = 0, flag = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {

        if ((tmp->val) == search)
        {
            cout << track << endl;
            flag++;
            break;
        }
        track++;
        tmp = tmp->next;
    }
    if (flag == 0)
    {
        cout << -1 << endl;
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val;

        while (true)
        {
            cin >> val;
            if (val == -1)
            {

                break;
            }
            insert_at_tail(head, tail, val);
        }

        int search;
        cin >> search;

        print_linked_list(head, search);
    }
    return 0;
}