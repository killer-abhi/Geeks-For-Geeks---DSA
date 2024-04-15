#include<bits/stdc++.h>
#include "../Tree/BinaryTree.cpp"
using namespace std;

// void findInorder(BinaryTree<int> *root,vector<int> &order){
//     if(root==NULL){
//         return;
//     }
//     findInorder(root->left,order);
//     order.push_back(root->key);
//     findInorder(root->right,order);
// }
// void swapNodes(BinaryTree<int> *root,int first,int second){
//     if(root==NULL){
//         return;
//     }
//     if(root->key==first){
//         root->key=second;
//     }
//     else if(root->key==second){
//         root->key==first;
//     }
//     swapNodes(root->left,first,second);
//     swapNodes(root->right,first,second);
// }
// void fixBST(BinaryTree<int> *root){
//     vector<int> order;
//     findInorder(root,order);
//     int prev=INT_MIN,first=-1,second=-1;

//     cout<<"Before Swap :: ";

//     for(int i=0;i<order.size();i++){
//         cout<<order[i]<<"\t";
//         if(order[i]<prev){
//             if(first==-1){
//                 first=prev;
//             }
//             second=order[i];
//         }
//         prev=order[i];
//     }
//     swapNodes(root,first,second);
//     cout<<"After Swap :: ";
//     vector<int> res;
//     findInorder(root,res);
//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<"\t";
//     }    
// }
BinaryTree<int> *first=NULL,*second=NULL,*prev=NULL;
void fixBST(BinaryTree<int> *root){
    if(root==NULL){
        return;
    }
    fixBST(root->left);
    if(::prev!=NULL&& root->key<::prev->key){
        if(first==NULL){
            first=::prev;
        }
        second=root;
    }
    ::prev=root;
    fixBST(root->right); 
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    fixBST(root);
    int temp=first->key;
    first->key=second->key;
    second->key=temp;
    return(0);
}