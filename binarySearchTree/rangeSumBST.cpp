#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

int rangeSumBST(Node *root, int low, int high)
{
    if (root->data >= low && root->data <= high)
    {
        return root->data + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
    }
    if (root->data < low)
    {
        return rangeSumBST(root->right, low, high);
    }
    return rangeSumBST(root->left, low, high);
}

int main()
{
}
