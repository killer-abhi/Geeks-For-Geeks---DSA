#include <bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

Node *removeDuplicates(Node *head)
{
    Node *curr = head;
    Node *nextNode = head->next;

    while (curr!=NULL&&nextNode != NULL)
    {
        if (curr->data == nextNode->data)
        {
            Node *temp = nextNode;
            curr->next = nextNode->next;
            nextNode=nextNode->next;
            delete temp;
        }
        else
        {
            curr = curr->next;
            nextNode=nextNode->next;
        }
    }
    return head;
}

int main()
{
    Node *head = getLinkedListData(NULL);
    head = removeDuplicates(head);
    display(head);
    return (0);
}