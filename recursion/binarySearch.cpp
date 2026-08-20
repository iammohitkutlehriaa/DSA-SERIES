#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr , int low , int high , int key) 
{
    if(low > high) {
        return -1;
    }
    int mid = low + (high - low ) / 2;
    if(arr[mid] == key ) {
        return  mid;
    }
    if(arr[mid] < key) {
        return binarySearch(arr , mid + 1, high , key);
    } else {
    return binarySearch(arr , mid -1, low ,key);
    }
}

int main() {
   vector<int> arr = {1,2,3,4,5,6,7};
   int key = 7;
   int result = binarySearch(arr , 0 ,arr.size() - 1, key);
   cout << "Key found at result : " << result << endl;

    return 0;
}