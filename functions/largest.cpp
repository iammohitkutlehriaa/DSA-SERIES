#include<iostream>
using namespace std;

int largest(int a, int b, int c) {
    if(a > b && c < a ){
        return a;
    } else if(b > c) {
        return b;
    } else {
        return c;
    }
}


int main() {
    cout << "Largest : " << largest(4,5,9);
    return 0;
}