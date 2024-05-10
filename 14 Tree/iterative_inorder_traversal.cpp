#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

void printInorder(BinaryTree<int> *root){
    stack<BinaryTree<int>*> st;
    BinaryTree<int> *temp=root;
    while(temp!=NULL||!st.empty()){
        while(temp!=NULL){
            st.push(temp);
            temp=temp->left;
        }
        temp=st.top();
        st.pop();
        cout<<temp->key<<"\t";
        temp=temp->right;
    }
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    printInorder(root);
    return(0);
}