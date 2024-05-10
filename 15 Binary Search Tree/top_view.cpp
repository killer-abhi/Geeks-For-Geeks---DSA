#include<bits/stdc++.h>
#include "../Tree/BinaryTree.cpp"
using namespace std;

void findDist(BinaryTree<int> *root,int dist,unordered_map<int,int> &distMap){
    if(root==NULL){
        return;
    }
    findDist(root->left,dist-1,distMap);
    distMap[root->key]=dist;
    findDist(root->right,dist+1,distMap);
}
void findTopView(BinaryTree<int> *root){
    if(root==NULL){
        return;
    }
    unordered_map<int,int> distMap;
    findDist(root,0,distMap);

    map<int,int> mp;
    queue<BinaryTree<int> *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        BinaryTree<int> *front = pendingNodes.front();
        pendingNodes.pop();
        if(!mp[distMap[front->key]]){
            mp[distMap[front->key]]=front->key;
        }
        if (front->left != NULL)
        {
            pendingNodes.push(front->left);
        }
        if (front->right != NULL)
        {
            pendingNodes.push(front->right);
        }
    }
    cout<<endl;
    for(auto x:mp){
        cout<<x.second<<"\t";
    }
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    findTopView(root);
    return(0);
}