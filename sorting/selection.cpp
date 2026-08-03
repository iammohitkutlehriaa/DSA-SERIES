#include<iostream>
using namespace std;

void print(int *arr , int n) {
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int *arr, int n) {
    for(int i = 0; i < n -1; i++) {
        int minIdx = i;
        for(int j = i +1; j < n; j++)
        {
            if(arr[j] > arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i] , arr[minIdx]);
    }
    print(arr , n);
}
 
int main() {
    int arr[6] = {1,6,5,2,3,4};
    int  n  = sizeof(arr) / sizeof(int);
    selectionSort(arr , n);
    return 0;

}