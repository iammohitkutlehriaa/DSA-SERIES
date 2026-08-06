#include<iostream>
using namespace std;

void sum(int matrix[][3], int n , int m)
{
    int sum = 0;
    for(int j = 0; j < m; j++) {
        sum += matrix[1][j];
    }
    cout << "Sum of 2nd row is : " << sum << endl;
}

int main() {
    int matrix[][3] = {{1,4,9},{11,4,3}, {2,2,3}};
    sum(matrix,3 ,3);

}