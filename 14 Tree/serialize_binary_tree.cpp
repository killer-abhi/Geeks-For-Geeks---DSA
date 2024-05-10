#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

void serialize(BinaryTree<int> *root,vector<int> &res){
    if(root==NULL){
        res.push_back(-1);
        return;
    }
    res.push_back(root->key);
    serialize(root->left,res);
    serialize(root->right,res);
}
int index=0;
BinaryTree<int>* deSerialize(vector<int> arr){
    if(index==arr.size()){
        return NULL;
    }
    int val=arr[index];
    index++;
    if(val==-1){
        return NULL;
    }
    BinaryTree<int> *root=new BinaryTree<int>(val);
    root->left=deSerialize(arr);
    root->right=deSerialize(arr);
    return root;
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    vector<int> res;
    serialize(root,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"\t";
    }
    return(0);
}