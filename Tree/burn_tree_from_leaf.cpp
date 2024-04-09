#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

int res=0;
int burnTime(BinaryTree<int> *root,int leaf,int &dist){
    if(root==NULL){
        return 0;
    }
    if(root->key==leaf){
        dist=0;
        return 1;
    }
    int ldist=-1,rdist=-1;
    int lHeight=burnTime(root->left,leaf,ldist);
    int rHeight=burnTime(root->right,leaf,rdist);
    if(ldist!=-1){
        dist=ldist+1;
        res=max(res,dist+rHeight);
    }
    else if(rdist!=-1){
        dist=rdist+1;
        res=max(res,dist+ldist);
    }
    return max(lHeight,rHeight);
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    int leaf;
    cout<<"Enter Leaf Key :: ";
    cin>>leaf;
    int dist=0;
    cout<<"Burn Time = "<<burnTime(root,leaf,dist);
    return(0);
}