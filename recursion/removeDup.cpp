#include <iostream>
#include <string>
using namespace std;

void removeDup(string str, string ans, int i, int map[26])
{
    if (i == str.size())
    {
        cout << "ans : " << ans << endl;
        return;
    }
    int mapIdx = (int)(str[i] - 'a');

    if (map[mapIdx])
    { // Duplicate
        removeDup(str, ans, i + 1, map);
    }
    else
    {
        // Not Duplicate
        map[mapIdx] = true;
        removeDup(str, ans + str[i], i + 1, map);
    }
}

int main()
{
    string str = "helloworld";
    string ans = "";
    int map[26] = {false};
    removeDup(str, ans, 0, map);

    return 0;
}