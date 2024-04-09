#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

int maxLevel=0;
void printLeftView(BinaryTree<int> *root,int level){
    if(root==NULL){
        return;
    }
    if(maxLevel<level){
        cout<<root->key<<"\t";
        maxLevel=level;
    }
    printLeftView(root->left,level+1);
    printLeftView(root->right,level+1);
}
int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    printLeftView(root,1);
    return(0);
}