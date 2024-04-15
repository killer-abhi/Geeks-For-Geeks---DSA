#include<bits/stdc++.h>
#include "../Tree/BinaryTree.cpp"
using namespace std;

void findVerticalDistance(BinaryTree<int> *root,int dist,map<int,int> &vertSum){
    if(root==NULL){
        return;
    }
    findVerticalDistance(root->left,dist-1,vertSum);
    vertSum[dist]+=root->key;
    findVerticalDistance(root->right,dist+1,vertSum);
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    map<int,int> vertSum;
    findVerticalDistance(root,0,vertSum);
    cout<<endl;
    for(auto sum :vertSum){
        cout<<sum.first<<":: "<<sum.second<<"\n";
    }
    return(0);
}