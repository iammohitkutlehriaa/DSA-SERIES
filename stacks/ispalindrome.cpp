#include<iostream>
#include<stack>
#include<list>

using namespace std;
class Node {
    public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
class List{
    public:
    Node* head;
    Node* tail;
    List() {
        head =NULL;
        tail = NULL;
    }
    void push_back(int val) {
        Node *newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
};

bool isPalindrome(Node* head) {
    stack<int> s;

    Node* temp = head;
    while(temp != NULL) {
        s.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL) {
        if(temp->data !=  s.top()) {
            return false;
        }
        s.pop();
        temp = temp->next;
    }
    return true;
}

int main() {
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(2);
    ll.push_back(1);

    cout << (isPalindrome(ll.head) ? "Palindrome" : "Not  Palindrome");
    return 0;

}