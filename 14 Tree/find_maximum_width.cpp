#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

int findMaxWidth(BinaryTree<int> *root){
    if(root==NULL){
        return 0;
    }
    queue<BinaryTree<int>*> q;
    q.push(root);
    int res=0;
    while(!q.empty()){
        int count=q.size();
        res=max(res,count);
        for(int i=0;i<count;i++){
            BinaryTree<int> *front=q.front();
            q.pop();
            if(front->left!=NULL){
                q.push(front->left);
            }
            if(front->right!=NULL){
                q.push(front->right);
            }
        }
    }
    return res;
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    cout<<"Maximum Width = "<<findMaxWidth(root);
    return(0);
}