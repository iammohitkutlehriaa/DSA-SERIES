#include<iostream>
using namespace std;
int main() {
    int n ,fact = 1, i=1;
    cout<< "Enter n : ";
    cin >> n;
    while(i <= n) {
        fact = fact * i;
        i++;
    
    }
     cout << fact << ": is the factorial of " << n << endl;
   
    return 0;
}