#include <bits/stdc++.h>
#include "../Tree/BinaryTree.cpp"
using namespace std;

BinaryTree<int> *findFloor(BinaryTree<int> *root, int x)
{
    BinaryTree<int> *res = NULL;
    while (root != NULL)
    {
        if (root->key == x)
        {
            return root;
        }
        else if (root->key > x)
        {
            root = root->left;
        }
        else
        {
            res = root;
            root = root->right;
        }
    }
    return res;
}

int main()
{
    BinaryTree<int> *root = takeInputLevelWise();
    int x;
    cin>>x;
    BinaryTree<int> *res=findFloor(root,x);
    return (0);
}