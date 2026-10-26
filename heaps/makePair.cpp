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

// class Student {
//     public: 
//     string name;
//     int marks;

//     Student(string name, int marks) {
//         this->name = name;
//         this->marks = marks;
//     }
//     bool operator < (const Student &obj) const {
//         return this->marks < obj.marks;
//     }
// };

struct comparePair{
    bool operator () (pair<string, int> &p1, pair<string , int > &p2){
        return  p1.second > p2.second;

    }
};

int main() {
    priority_queue<pair<string, int> , vector<pair<string , int >>,comparePair> pq;

    pq.push(make_pair("Ayush", 500));
    pq.push(make_pair("Akshit", 1000));
    pq.push(make_pair("mohit", 100));

    while(!pq.empty()) {
        cout << " top : " << pq.top().first << " , " << pq.top().second << endl; 
        pq.pop();
    }

    return 0;

}
