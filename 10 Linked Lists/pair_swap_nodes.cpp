#include <bits/stdc++.h>
#include "singly_linked_list.cpp"
using namespace std;

Node *pairwiseSwap(Node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *prev = head;
    Node *curr = head->next->next;
    head = head->next;
    head->next=prev;
    while (curr != NULL && curr->next != NULL)
    {
        prev->next = curr->next;
        prev=curr;
        Node *temp = curr->next->next;
        curr->next->next=curr;
        curr=temp;
    }
    prev->next=curr;
    return head;
}

int main()
{
    Node *head = getLinkedListData(NULL);
    head = pairwiseSwap(head);
    display(head);
    return (0);
}