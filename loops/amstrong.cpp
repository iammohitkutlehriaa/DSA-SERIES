#include <iostream>
using namespace std;

int main()
{
    int n = 371 , i, originalNum, cubeSum = 0;
    originalNum = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        cubeSum += lastDigit * lastDigit * lastDigit;
        n/= 10;
    }
    if (originalNum == cubeSum)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not an Armstrong number" << endl;
    }

    return 0;
}