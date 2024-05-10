#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

void printInorder(BinaryTree<int> *root){
    if(root!=NULL){
        printInorder(root->left);
        cout<<root->key<<"\t";
        printInorder(root->right);
    }
}

int main()
{
    BinaryTree<int> *root=new BinaryTree<int>(10);
    root->left=new BinaryTree<int>(20);
    root->right=new BinaryTree<int>(30);
    printInorder(root);
    return(0);
}