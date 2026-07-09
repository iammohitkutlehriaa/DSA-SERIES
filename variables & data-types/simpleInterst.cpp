#include<iostream>
using namespace std;

int main() {
    float p,r,t;
    cout<< "Enter the values"<<endl;
    cin>> p >> r >> t ;

    cout << "Simple Interest = " << (p*r*t)/100 << endl;

    return 0;
}