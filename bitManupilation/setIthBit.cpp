#include<iostream>
using namespace std;


int setIthBit(int num , int i ) {
    int bitmask = 1 << i;
    return (num | bitmask);
}

int main() {
    cout << setIthBit(6,3);
    return 0;

}