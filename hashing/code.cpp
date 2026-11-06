#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Node
{
public:
    string key;
    int val;
    Node *next;

    Node(string key, int val)
    {
        this->key = key;
        this->val = val;
        next = NULL;
    }
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

class HashTable
{
    int toSize;
    int currSize;
    Node **table;

    int hashFunction(string key)
    {

        int idx = 0;

        for (int i = 0; i < key.size(); i++)
        {
            idx = idx + (key[i] * key[i]) % toSize;
        }
        return idx%toSize;
    }

    void rehash()
    {
        Node **oldTable = table;
        int oldSize = toSize;

        toSize = 2 * toSize;
        currSize = 0 ;
        table = new Node *[toSize];

        for (int i = 0; i < toSize; i++)
        {
            table[i] = NULL;
        }
        // copy new Value
        for (int i = 0; i < oldSize; i++)
        {
            Node *temp = oldTable[i];
            while (temp != NULL)
            {
                insert(temp->key, temp->val);
                temp = temp->next;
            }
            if (oldTable[i] != NULL)
            {
                delete oldTable[i];
            }
        }
        delete[] oldTable;
    }

public:
    HashTable(int size = 5)
    {
        toSize = size;
        currSize = 0;

        table = new Node *[toSize];

        for (int i = 0; i < toSize; i++)
        {
            table[i] = NULL;
        }
    }

    void insert(string key, int val)
    {

        int idx = hashFunction(key);

        Node *newNode = new Node(key, val);
        Node *head = table[idx];

        newNode->next = table[idx];
        table[idx] = newNode;

        currSize++;

        double lambda = currSize / (double)toSize;
        if (lambda > 1)
        {
            rehash();
        }
    }

    bool exists(string key)
    {
        int idx = hashFunction(key);

        Node *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    int search(string key)
    {
        int idx = hashFunction(key);

        Node* temp = table[idx];
        while(temp != NULL) {
            if(temp->key == key) {
                return temp->val;
            }
            temp = temp->next;
        }
        return -1;
    }
    void remove(string key)
    {

        int idx = hashFunction(key);

        Node* temp = table[idx];
        Node* prev = temp;
        while(temp != NULL) {

            if(temp->key == key ) { // erase
                if(prev == temp ) { // head
                  table[idx] = temp->next;

                } else {
                    prev->next = temp->next;
                }
                break;

            }
            prev =  temp;
            temp = temp->next;

        }
    }

    void print() {
        for(int  i = 0; i < toSize; i++ ) {
            cout << "idx : " << i << "->";
            Node* temp  = table[i];
            while(temp != NULL) {
                cout << "{" << temp -> key << " , " << temp->val << "} -> " ;
                temp = temp->next;
            } 
            cout << endl;
        }
    }
};

int main()
{
    HashTable ht;

    ht.insert("Canada" , 150);
    ht.insert("England" , 150);
    ht.insert("Swizterland" , 50);
    ht.insert("USA" , 10);
    ht.insert("Dubai" , 20);

    

    ht.remove("Canada");
    ht.print();
    cout << endl;
    ht.remove("England");
    ht.print();

    return 0;
}