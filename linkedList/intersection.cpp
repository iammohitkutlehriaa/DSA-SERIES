#include<iostream>
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
    Node* head1 = NULL;
    Node* head2 = NULL;

    List() {
        Node* common = new  Node(6);
        common->next = new Node(7);

        head1 = new Node(4);
        head1->next = new Node(5);
        head1->next->next = common;

        head2 = new Node(1);
        head2->next = new Node(2);
        head2->next->next = new Node(3);
        head2->next->next->next = common;

    }
};

int getSize(Node* head) {
    int size = 0;
    while(head != NULL) {
        head = head->next;
        size++;
    }
    return size;
}

Node* intersection(Node* head1 , Node* head2) {
    int m = getSize(head1);
    int n = getSize(head2);
    

    Node* t1 = head1;
    Node* t2 = head2;

    int diff =  0 ;
    if(m >= n) {
        diff = m - n;
        for(int i = 0; i < diff; i++) {
            t1 = t1->next;
        }
        } else {
            diff = n - m ;

            for(int  i = 0 ; i < diff; i++) {
                t2 = t2->next;
            }
        }
        while(t1 != NULL && t2 != NULL && t1 != t2) {
            t1 = t1->next;
            t2 = t2->next;
        }
        if(t1 == NULL) {
            return NULL;
        } else {
            return t1;
        }
    }


int main() {
    List ll;
    Node* ans = intersection(ll.head1, ll.head2);
    if(ans != NULL) {
        cout << "Intersection Point : " << ans->data << endl;
    } else {
        cout << "No intersection" << endl;
    }
    return  0;
}