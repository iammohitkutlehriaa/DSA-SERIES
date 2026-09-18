#include <iostream>
#include <vector>
#include<string>
using namespace std;

// creating a stack
template<class T>
class Stack
{
    vector<T> vec;

public:
    void push(T val)
    {
        vec.push_back(val);
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty.\n";
        }
        vec.pop_back();
    }
    T top()
    {
        // if (isEmpty())
        // {
        //     cout << "Stack is empty.\n";
        //     return -1;
        // }
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }
    bool isEmpty()
    {
        return vec.size() == 0;
    }
};

int main()
{
    Stack<string> s;
    s.push("AYUSH");
    s.push("AKSHIT");
    s.push("KUMKUM");
    s.push("RITIKA");
    s.push("MOHIT");
    while(!s.isEmpty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}