#include <bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

void printLevelOrder(BinaryTree<int> *root)
{

    if (root == NULL)
    {
        return;
    }
    queue<BinaryTree<int> *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        BinaryTree<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->key << "\t";
        if (front->left != NULL)
        {
            pendingNodes.push(front->left);
        }
        if (front->right != NULL)
        {
            pendingNodes.push(front->right);
        }
    }
}

int main()
{
    BinaryTree<int> *root = takeInputLevelWise();
    printLevelOrder(root);
    return (0);
}