#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

void printPostorder(BinaryTree<int> *root){
    if(root!=NULL){
        printPostorder(root->left);
        printPostorder(root->right);
        cout<<root->key<<"\t";
    }
}

int main()
{
    BinaryTree<int> *root=new BinaryTree<int>(10);
    root->left=new BinaryTree<int>(20);
    root->right=new BinaryTree<int>(30);
    printPostorder(root);
    return(0);
}