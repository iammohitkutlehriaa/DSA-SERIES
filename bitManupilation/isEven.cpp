#include<iostream>
using namespace std;


void oddOrEven(int num) {
    if(!(num & 1 )) {
        cout << "Even \n";
    } else {
        cout << " odd \n";
    }

}
int main() {
    oddOrEven(13);
    oddOrEven(7);
    oddOrEven(4);
    return 0;
}