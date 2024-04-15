#include<bits/stdc++.h>
#include "../Tree/BinaryTree.cpp"
using namespace std;

void findDist(BinaryTree<int> *root,int dist,map<int,int> &distMap){
    if(root==NULL){
        return;
    }
    findDist(root->left,dist-1,distMap);
    if(!distMap[dist]){
    distMap[dist]=root->key;
    }
    findDist(root->right,dist+1,distMap);
}
void findBottomView(BinaryTree<int> *root){
    if(root==NULL){
        return;
    }
    map<int,int> mp;
    findDist(root,0,mp);
    cout<<endl;
    for(auto x:mp){
        cout<<x.second<<"\t";
    }
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    findBottomView(root);
    return(0);
}