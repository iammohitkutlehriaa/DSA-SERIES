#include<iostream>
using namespace std;

int wholeSq(int a, int b) {
    return a*a + b*b + 2*a*b;
}

int main() {
    int x, y;
    cout << "Ener the value of x and y" ;
    cin >> x >> y;
    cout << "WholeSquare : " << wholeSq(x,y);
     return 0;
}