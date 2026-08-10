#include<iostream>
#include<vector>
using namespace std;

vector<int> misMatch(vector<int> arr)
{
    for(int  i = 1; i < arr.size(); i++) {
        if(arr[i] == arr[i - 1]) {
            int duplicate = arr[i];  
        }
        if(arr[i] > arr[i - 1] +1){
            int missing = arr[i-1] + 1;
            }
    }

}

int main() {
    vector<int> arr = {1,2,2,4};
    misMatch(arr);

}