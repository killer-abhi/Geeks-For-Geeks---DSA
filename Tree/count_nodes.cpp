#include <bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

int countNodes(BinaryTree<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}
// Efficient Approach

int countNodesCBT(BinaryTree<int> *root)
{
    int leftHeight = 0, rightHeight = 0;
    BinaryTree<int> *temp = root;
    while (temp != NULL)
    {
        leftHeight++;
        temp = temp->left;
    }
    temp = root;
    while (temp != NULL)
    {
        rightHeight++;
        temp = temp->right;
    }

    if (leftHeight == rightHeight)
    {
        return pow(2, leftHeight) - 1;
    }
    else
    {
        return countNodes(root);
    }
}
int main()
{
    BinaryTree<int> *root = takeInputLevelWise();
    cout << "Total Nodes = " << countNodes(root);
    return (0);
}