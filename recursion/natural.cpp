#include <iostream>
using namespace std;

int sum(int num)
{

    if (num == 1)
    {
        return 1;
    }
    return  num + sum(num - 1);
}

int main()
{
    int num;
    int ans = sum(5);
    cout << "Sum of natural number is : " << ans << endl;

    return 0;
}