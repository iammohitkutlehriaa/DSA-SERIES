#include<iostream>
using namespace std;

int countSetBits(int num ) {
    int count = 0;
    while(num > 0) {
        int lastDig  = num & 1;
        count += lastDig;
    }
    cout << count << endl;
    return count;
}

int main() {
    countSetBits(7);
    return  0;
}
