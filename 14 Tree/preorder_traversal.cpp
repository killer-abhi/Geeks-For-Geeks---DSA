#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

void printPreorder(BinaryTree<int> *root){
    if(root!=NULL){
        cout<<root->key<<"\t";
        printPreorder(root->left);
        printPreorder(root->right);
    }
}

int main()
{
    BinaryTree<int> *root=new BinaryTree<int>(10);
    root->left=new BinaryTree<int>(20);
    root->right=new BinaryTree<int>(30);
    printPreorder(root);
    return(0);
}