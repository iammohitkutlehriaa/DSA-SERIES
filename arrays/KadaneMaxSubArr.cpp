#include<iostream>
using namespace std;

void kSubArr(int *arr , int n){
    int maxSum = INT8_MIN;
    int currSum = 0;
    for(int start = 0 ; start < n; start++) {
        currSum += arr[start];
        maxSum = max(maxSum , currSum); 
            if(currSum < 0) {
                currSum = 0;
        }
      
    }
      cout << "Maximum sub array with kadane Algorithm : " << maxSum ;

}

int main() {
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);
    kSubArr(arr , n);
    return 0;
}