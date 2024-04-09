#include <bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

int isHeightBalanced(BinaryTree<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = isHeightBalanced(root->left);
    if(leftHeight==-1){
        return -1;
    }
    int rightHeight = isHeightBalanced(root->right);
    if(rightHeight==-1){
        return -1;
    }

    if(abs(leftHeight-rightHeight)>1){
        return -1;
    }else{
        return max(leftHeight,rightHeight)+1;
    }

}
int main()
{
    BinaryTree<int> *root = takeInputLevelWise();
    if (isHeightBalanced(root)!=-1)
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }
    return (0);
}