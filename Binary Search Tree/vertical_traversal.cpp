#include<bits/stdc++.h>
#include "../Tree/BinaryTree.cpp"
using namespace std;

void findVerticalDistance(BinaryTree<int> *root,int dist,map<int,vector<int>> &mp){
    if(root==NULL){
        return;
    }
    findVerticalDistance(root->left,dist-1,mp);
    mp[dist].push_back(root->key);
    findVerticalDistance(root->right,dist+1,mp);
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    map<int,vector<int>> mp;
    findVerticalDistance(root,0,mp);
    cout<<endl;
    for(auto x :mp){
        for(int i=0;i<x.second.size();i++){
            cout<<x.second[i]<<"\t";
        }
        cout<<endl;
    }
    return(0);
}