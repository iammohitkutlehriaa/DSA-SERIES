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
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "NULL \n";
    }

    int helper(Node* temp , int key){
        if(temp == NULL);
        if(temp->data == key) {
            return  0;
        }
        int idx = helper(temp->next, key);
        if(idx == -1) {
            return -1;
        }
        return idx + 1;
    }

    int searchRec(int key) {
       helper(head, key);
    }
};

int main(){
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    cout << ll.searchRec(3) << endl;

}
