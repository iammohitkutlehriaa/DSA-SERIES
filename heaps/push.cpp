#include <iostream>
#include <vector>
#include<queue>
using namespace std;

class Heap
{
    vector<int> vec; // CBT;
public:
    void push(int val)
    {

        vec.push_back(val);

        int x = vec.size() - 1;

        int parI = (x - 1) / 2;

        while (parI >= 0 && vec[x] > vec[parI])
        { // O(logn)
            swap(vec[x], vec[parI]);
            x = parI;
            parI = (x - 1) / 2;
        }
    }

    void heapify(int i)
    { // i = parI
        if (i >= vec.size())
        {
            return;
        }
        int l = 2 * i + 1;
        int r = 2 * i + 2;

        int maxIdx = i;

        if (l < vec.size() && vec[l] > vec[maxIdx])
        {
            maxIdx = l;
        }
        if (r < vec.size() && vec[r] > vec[maxIdx])
        {
            maxIdx = r;
        }
        swap(vec[i], vec[maxIdx]);
        if (maxIdx != i)
        {
            heapify(maxIdx);
        }
    }

    void pop()
    {
        swap(vec[0], vec[vec.size() - 1]);

        vec.pop_back();

        heapify(0);
    }
    int top()
    {
        return vec[0]; // hightest priority element;
    }

    bool empty()
    {
        return vec.size() == 0;
    }
};

class Student {
    public: 
    string name;
    int marks;

    Student(string name, int marks) {
        this->name = name;
        this->marks = marks;
    }
    bool operator < (const Student &obj) const {
        return this->marks < obj.marks;
    }
};

int main()
{

    priority_queue<Student> pq;
    pq.push(Student("Mohit" ,90));
    pq.push(Student("Ritika" ,95));
    pq.push(Student("Bhumika" ,80));

    while(!pq.empty()) {
        cout << " top : " << pq.top().name << " , " << pq.top().marks<< endl;
        pq.pop();
    }


    Heap heap;
    heap.push(9);
    heap.push(4);
    heap.push(8);    
    heap.push(1);    
    heap.push(2);    
    heap.push(5);    


    while (!heap.empty())
    {
        cout << " top : " << heap.top() << endl;
        heap.pop();
    }
    return 0;
}