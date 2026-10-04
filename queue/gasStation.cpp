#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int canCompeleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int totalGas = 0;
    int currGas = 0;
    int startIndex = 0;
    int n = gas.size();

    for(int  i = 0; i < n ; i++) {
        currGas += gas[i] - cost[i];
        totalGas += gas[i] - cost[i];
        if(currGas < 0) {
            startIndex  = i + 1;
            currGas = 0;
        }
    }
    return totalGas >= 0 ? startIndex : -1;
}

int main()
{
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};
    cout << canCompeleteCircuit(gas ,cost) << endl;
    return 0;

}