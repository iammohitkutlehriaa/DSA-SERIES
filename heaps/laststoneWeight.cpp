#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int lastStoneWeight(vector<int> &stones){

    // insert all elments;
    priority_queue<int> pq;
    for(int i = 0; i < stones.size(); i++) {
        pq.push(stones[i]);
    }
 // while loop until stones size > 1
    while(pq.size() > 1) {
    int first = pq.top();
    pq.pop();
    int second = pq.top();
    pq.pop();
        if(first != second) {
            pq.push(first - second);
        }
    }
    if(pq.empty()) {
        return 0;

    }
    return pq.top();

}

int main() {
    vector<int> stones = {2,7,4,1,8,1};

    int ans = lastStoneWeight(stones);
    cout << ans << endl;
    
    return 0;
}