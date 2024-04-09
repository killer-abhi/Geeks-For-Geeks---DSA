#include <bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

int getIndex(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

BinaryTree<int> *getBinaryTree(int *preOrder, int *inOrder, int n)
{
    BinaryTree<int> *root = new BinaryTree<int>(preOrder[0]);

    int rootPos = getIndex(inOrder, n, root->key);

    for (int i = 1; i < n; i++)
    {
        int curPos = getIndex(inOrder, n, preOrder[i]);
        BinaryTree<int> *newNode = new BinaryTree<int>(preOrder[i]);
        if (curPos < rootPos)
        {
            root->left = newNode;
        }
        else
        {
            root->right = newNode;
        }
        rootPos=curPos;
        root=newNode;
    }
}

int main()
{
    int n;
    cin >> n;
    int inOrder[n];
    cout << "Enter Inorder Traversal :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> inOrder[i];
    }
    int preOrder[n];
    cout << "Enter PreOrder Traversal :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> preOrder[i];
    }
    BinaryTree<int> *root = getBinaryTree(preOrder, inOrder, n);
    return (0);
}