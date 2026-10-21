#include<iostream>
#include<vector>

using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

Node* insert(Node* root , int val ) {
    if(root == NULL) {
        root = new Node(val);
        return root;
    }
    if(val < root->data) {
        root->left = insert(root->left, val);
    }

    else {
        root->right = insert(root->right, val);
    }
    return root;
}



Node* buildBST(int arr[], int n) {
    Node* root = NULL;

    for (int i = 0; i < n; i++) {
        root = insert(root,arr[i]);
    }
    return root;

}
void inOrder(Node* root) {
    if(root == NULL) {
        return ;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

Node* getInOrderSuccessor(Node* root) {
    while(root->left == NULL) {
        root = root->left;
    }
    return root;
}

Node* delNode(Node* root , int val) 
{
    if(root == NULL) {
        return NULL;
    }
    if(val < root->data) {
        root->left  = delNode(root->left , val);
    } else if(val > root->data) {
        root->right = delNode(root->right, val);
    } else {
        //case1
        if(root->left ==  NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        //case2
        if(root->left == NULL || root->right == NULL) {
            return root->left == NULL ? root->right : root->left;
        }
        // case3
        Node* IS = getInOrderSuccessor(root->right);
        root->data = IS->data;
        delNode(root->right , IS->data);
    }
    return root;
}
 
int main() {
    int arr[9] = {8,5,3,1,4,6,10,11,14};

   Node* root =  buildBST(arr , 9);
   inOrder(root);
   cout << endl;
   delNode(root , 5);
   inOrder(root);
   cout << endl;
    return 0;
}