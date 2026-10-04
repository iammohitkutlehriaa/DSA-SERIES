#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int timeTakenToBuyTickets(vector<int> &tickets , int k) {
    queue<pair<int, int>> q;
    int n  = tickets.size();
    for(int  i = 0; i < n; i++) {
        q.push({tickets[i], i});

    }
    int time = 0;

    while(true) {
        pair<int ,int> current = q.front();
        q.pop();
        current.first--;
        time++;
        if(current.second == k && current.first == 0) {
            return time;
        } 
        if(current.first > 0) {
            q.push(current);
        }
    }
}


int main() {
    vector<int> tickets = {2,3,2};
   int k = 2;

    cout << "Time taken to buy Tickets is : " <<timeTakenToBuyTickets(tickets , k) << endl;
    
    return 0;
}