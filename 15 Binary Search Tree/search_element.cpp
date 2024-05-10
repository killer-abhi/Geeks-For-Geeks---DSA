#include<bits/stdc++.h>
#include "../Tree/BinaryTree.cpp"
using namespace std;

bool searchKey(BinaryTree<int> *root,int key){
    if(root==NULL){
        return false;
    }
    else if(root->key==key){
        return true;
    }
    if(key>root->key){
        return searchKey(root->right,key);
    }else{
        return searchKey(root->left,key);
    }
}

int main()
{   
    BinaryTree<int> *root=takeInputLevelWise();
    int key;
    cout<<"Enter element to be searched ::";
    cin>>key;
    if(searchKey(root,key)){
        cout<<"Element Found ";
    }else{
        cout<<"Element Not Found";
    }
    return(0);
}