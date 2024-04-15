#include<bits/stdc++.h>
#include "../Tree/BinaryTree.cpp"
using namespace std;

// Using Hashmap

bool isPairSum(BinaryTree<int> *root,int sum,unordered_set<int> &set){
    if(root==NULL){
        return false;
    }
    if(isPairSum(root->left,sum,set)==true){
        return true;
    }
    if(set.find(sum-root->key)!=set.end()){
        return true;
    }
    else{
        set.insert(root->key);
    }
    return isPairSum(root->right,sum,set);
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    int sum;
    cin>>sum;
    unordered_set<int> set;
    if(isPairSum(root,sum,set)){
        cout<<"Pair Found ";
    }else{
        cout<<"Pair Not Found";
    }
    return(0);
}