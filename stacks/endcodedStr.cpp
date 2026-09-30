#include <iostream>
#include <stack>
#include <string>
using namespace std;

string decodeString(string s)
{
    stack<int> countStack;
    stack<string> stringStack;
    int n = 0;
    string current;

    for (char c : s)
    {
        if (isdigit(c))
        {
            n = n * 10 + (c - '0');
        }
        else if (c == '[')
        {
            countStack.push(n);
            n = 0;

            stringStack.push(current);
            current = "";
        }
        else if (c == ']')
        {
            int K = countStack.top();
            countStack.pop();

            string temp = current;

            current = stringStack.top();
            stringStack.pop();

            while (K-- > 0)
            {
                current += temp;
            }
        }
        else
        {
            current += c;
        }
    }
    return current;
}

int main()
{
    string s  = "3[a]2[bc]";
    cout << decodeString(s) << endl;

    return 0;
}
