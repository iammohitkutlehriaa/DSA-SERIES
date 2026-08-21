#include<iostream>
using namespace std;


void printArr(int arr[] , int n) {
    for(int i  = 0 ; i < n; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[] , int si , int ei) {
  int i = si -1;
  int pvt = arr[ei];
  for(int j = si; j < ei; j++) {
    if(arr[j] <= pvt) {
        i++;
        swap(arr[i], arr[j]);
    }
  }
  i++;
  swap(arr[i], arr[ei]);

  return i;
}

void quickSort(int arr[] , int si, int ei ) {
    if(si >= ei ){
        return;
    }
    int pvtIdx= partition(arr , si , ei);

    quickSort(arr , si ,pvtIdx - 1);
    quickSort(arr , pvtIdx + 1 , ei);
}


int main() {
    int arr[6] = {6,2,5,3,1,4};
    int n = 6;

    quickSort(arr , 0 , n- 1);
    printArr(arr , n);
    return  0;
}