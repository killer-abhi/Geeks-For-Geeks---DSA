#include<bits/stdc++.h>
#include "../Tree/BinaryTree.cpp"
using namespace std;

BinaryTree<int>* insertNode(BinaryTree<int> *root,int key){
    if(root==NULL){
        return new BinaryTree<int>(key);
    }
    else if(key>root->key){
        root->right=insertNode(root->right,key);
    }else{
        root->left=insertNode(root->left,key);
    }
    return root;
}

int main()
{   
    BinaryTree<int> *root=takeInputLevelWise();
    int key;
    cout<<"Enter element to be inserted ::";
    cin>>key;
    root=insertNode(root,key);
    cout<<"Element Inserted";
    return(0);
}