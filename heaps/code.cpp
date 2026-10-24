#include<iostream>
#include<queue>
#include<vector>

using namespace std;


priority_queue<int , vector<int> , greater<int>> pq;

int main() {
    pq.push(5);
    pq.push(20);
    pq.push(15);

    while(!pq.empty()) {
        cout << "Top : " << pq.top() << endl;
        pq.pop();
    }
    return 0;
}