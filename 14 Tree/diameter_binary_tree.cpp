#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

int findHeight(BinaryTree<int> *root){
    if(root==NULL){
        return 0;
    }
    return 1+max(findHeight(root->left),findHeight(root->right));
}

int getDiameter(BinaryTree<int> *root){
    if(root==NULL){
        return 0;
    }
    int d1=1+findHeight(root->left)+findHeight(root->right);
    int d2=getDiameter(root->left);
    int d3=getDiameter(root->right);
    return max(d1,max(d2,d3));
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();   

    cout<<"Diameter of Tree :: "<<getDiameter(root); 
    return(0);
}