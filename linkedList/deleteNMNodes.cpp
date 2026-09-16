#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

void deleteNAfterM(Node* head, int M , int N) {
    Node* curr = head;
    while(curr != NULL) {
    for(int  i = 1; i < M && curr != NULL; i++) {
        curr = curr->next;
    }
    if(curr == NULL) 
    break;

    Node* temp = curr->next;
    for(int i = 1; i <= N && temp!= NULL; i++) {
        temp = temp->next;
    }
    curr->next = temp;
    curr = temp;
    }

}

int main()
{

    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.push_back(8);
    ll.push_back(9);
    ll.push_back(10);

    int M = 3 ;
    int N = 2;
    cout << "Original linked List : "; ll.printList();
    deleteNAfterM(ll.head, M ,N);
    cout << "After delteion " ; ll.printList();
    return 0;
}