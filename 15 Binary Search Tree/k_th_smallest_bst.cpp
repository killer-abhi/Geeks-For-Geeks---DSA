#include <bits/stdc++.h>
#include "../Tree/BinaryTree.cpp"
using namespace std;

BinaryTree<int> *kSmallest(BinaryTree<int> *root, int k, int &count)
{
    if (root == NULL)
    {
        return NULL;
    }
    kSmallest(root->left, k, count);
    count++;
    if (count == k)
    {
        return root;
    }
}

int main()
{
    BinaryTree<int> *root = takeInputLevelWise();
    int k;
    cin>>k;
    int count=0;
    BinaryTree<int> *res=kSmallest(root,k,count);
    if(res!=NULL){
        cout<<k<<" th Smallest = "<<res->key;
    }else{
        cout<<"Element Not Found!";
    }
    return (0);
}