#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

void majorityElement(vector<int> nums1)
{
    unordered_map<int, int> m;
    for (int i = 0; i < nums1.size(); i++)
    {
        if (m.count(nums1[i]))
        {
            m[nums1[i]]++;
        }
        else
        {
            m[nums1[i]] = 1;
        }
    }
    for (pair<int, int> p : m)
    {
        if (p.second > nums1.size() / 3)
        {
            cout << p.first << " ";
        }
    }
}

int main()
{
    vector<int> nums1 = {1, 3, 2, 5, 1, 3, 1, 5, 1};
    vector<int> nums2 = {1, 2};

    majorityElement(nums2);

    return 0;
}