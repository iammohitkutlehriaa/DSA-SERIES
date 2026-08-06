#include<iostream>
using namespace std;


int main () {
    int original[] = {1,2,3,4,5,6};
    int m = 2;
    int n = 3;

    int ans[2][3];
    int k = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            ans[i][j] = original[k];
            k++;
            cout << ans[i][j] << " ";
        }
        cout << endl;
        
    }
}