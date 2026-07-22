#include<iostream>
using namespace std;
 int main() {
    int arr[] = {5,6,12,56,90,1};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Maximum value is : " << max << endl;
    return 0;
 }