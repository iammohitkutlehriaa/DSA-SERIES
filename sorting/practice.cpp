#include <iostream>
using namespace std;

int print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubblesort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    //print(arr, n);
}

void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxIdx])
            {
                maxIdx = j;
            }
        }
        swap(arr[i], arr[maxIdx]);
    }
    print(arr, n);
}

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] < curr)
        {
            arr[prev + 1]  = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
    print(arr , n);
}

void countingSort(int *arr, int n)
{
    int freq[100000] = {0};
    int minVal = INT8_MAX, maxVal = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    for (int i = maxVal, j = 0; i >= minVal; i--)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr , n);
}

int main()
{
    int arr[10] = {3, 6, 2, 1, 8, 7, 4, 5, 4,3};
    int n = sizeof(arr) / sizeof(int);
    // bubblesort(arr , 10);
    //selectionSort(arr, n);
  //  insertionSort(arr, n);
    countingSort(arr, n);
}