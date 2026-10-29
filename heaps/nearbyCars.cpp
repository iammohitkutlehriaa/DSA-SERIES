#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Car
{
public:
    int idx;
    int disSq;

    Car(int idx, int disSq)
    {
        this->idx = idx;
        this->disSq = disSq;
    }

    bool operator < (const Car &obj) const {
        return this->disSq  > obj.disSq;
    }
};

void nearbyCars(vector<pair<int, int>> pos, int k)
{

    vector<Car> cars;

    for (int i = 0; i < pos.size(); i++)
    {
        int disSq = pos[i].first * pos[i].first + pos[i].second * pos[i].second;
        cars.push_back (Car(i,disSq));
    }

    priority_queue<Car> pq(cars.begin() , cars.end());  // O(n);


    for(int i  = 0; i < k; i++) {  // O(k*log*n);
       cout << " Car : " << pq.top().idx << endl;
       pq.pop();
    }

}

int main()
{
    vector<pair<int, int>> pos;

    pos.push_back(make_pair(3, 3));
    pos.push_back(make_pair(5, -1));
    pos.push_back(make_pair(-2, 4));

    int k = 2;

    nearbyCars(pos , k);
    return 0;
}