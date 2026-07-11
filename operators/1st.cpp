#include<iostream>
using namespace std;

int main()
{
    int x = 3, y = 7;
    int exp1 = (x*y/x);
    int exp2 = (x*(y/x));

    cout << exp1 << ",";
    cout << exp2 << "\n";
    return 0;
}