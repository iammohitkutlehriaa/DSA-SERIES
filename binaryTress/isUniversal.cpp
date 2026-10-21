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

static int idx = -1;

Node *buildTree(vector<int> nodes)
{
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }
    Node *currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

bool isUniValued(Node* root) {
    if(root == NULL) {
        return true;
    }
    if(root->left != NULL && root->left->data != root->data) {
        return false;
    }
    if(root->right != NULL && root->right->data != root->data) {
        return false;
    }

    return isUniValued(root->left) && isUniValued(root->right);

}

int main()
{
    vector<int> nodes = {1, 1, 1,-1, -1, 1, -1, -1, 1, -1,1, -1, -1};

    Node*  root = buildTree(nodes);
   cout <<  "IsUnivalued : " << isUniValued(root) << endl;

    return 0;
}