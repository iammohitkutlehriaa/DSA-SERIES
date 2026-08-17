#include<iostream>
#include<string>
using namespace std;

void counter() {
     static int count  = 0;
    count++;
    cout << "Count : "  << count << endl;
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}