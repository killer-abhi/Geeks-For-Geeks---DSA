#include <bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

void printSpiral(BinaryTree<int> *root)
{
    if(root==NULL) return;
    queue<BinaryTree<int> *> pendingNodes;
    pendingNodes.push(root);
    bool isReverse = true;
    stack<int> reverseNodes;
    while (!pendingNodes.empty())
    {
        int count = pendingNodes.size();
        for (int i = 0; i < count; i++)
        {
            BinaryTree<int> *front = pendingNodes.front();
            pendingNodes.pop();
            if (isReverse)
            {
                reverseNodes.push(front->key);
            }
            else
            {
                cout << front->key;
            }
            if (front->right != NULL)
            {
                pendingNodes.push(front->right);
            }
            if (front->left != NULL)
            {
                pendingNodes.push(front->left);
            }
        }
        if(isReverse){
            while(!reverseNodes.empty()){
                cout<<reverseNodes.top()<<"\t";
                reverseNodes.pop();
            }
        }
        isReverse=!isReverse;
        cout<<endl;
    }
}

int main()
{
    BinaryTree<int> *root = takeInputLevelWise();
    printSpiral(root);
    return (0);
}