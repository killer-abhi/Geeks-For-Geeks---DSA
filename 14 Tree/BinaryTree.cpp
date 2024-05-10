#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct BinaryTree
{
    T key;
    BinaryTree *left;
    BinaryTree *right;

    BinaryTree(T k)
    {
        key = k;
        left = right = NULL;
    }
};
BinaryTree<int>* takeInputLevelWise()
{
    int rootKey;
    cout << "Enter the root Element :: ";
    cin >> rootKey;
    if(rootKey==-1){
        return NULL;
    }
    BinaryTree<int> *root = new BinaryTree<int>(rootKey);
    queue<BinaryTree<int> *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        BinaryTree<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int lKey, rKey;
        cout << "Enter left key of " << front->key << " :: ";
        cin >> lKey;
        cout << "Enter right key of " << front->key << " :: ";
        cin >> rKey;
        if (lKey != -1)
        {
            BinaryTree<int> *leftChild = new BinaryTree<int>(lKey);
            front->left = leftChild;
            pendingNodes.push(leftChild);
        }
        if (rKey != -1)
        {
            BinaryTree<int> *rightChild = new BinaryTree<int>(rKey);
            front->right = rightChild;
            pendingNodes.push(rightChild);
        }
    }
    return root;
}

// int main()
// {
//     BinaryTree *root=new BinaryTree(10);
//     root->left=new BinaryTree(20);
//     root->right=new BinaryTree(30);
//     return(0);
// }