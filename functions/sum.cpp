#include<iostream>
using namespace std;

 int digSum(int n) {
    int res = 0;
    while(n > 0) {
        res += n % 10;
        n = n/10;
    }
    return res;
 }

int main() {
    
    cout << "sum : " << digSum(40);
    return 0;
}