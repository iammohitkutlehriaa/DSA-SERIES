#include<iostream>
using namespace std;

int main() {
    int num ;
    cout<< "Enter num : " ;
    cin >> num ;
    if( num > 0 ) {
        cout<< "num is positive : " << num << endl;
    } else {
        cout << "num is negative" << num << endl;
    }
    return 0;
}