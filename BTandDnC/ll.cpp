
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};


void insertAtEnd(int val, Node *&h, Node *&t)
{
    Node *newNode = new Node(val);

    if (h == NULL && t == NULL)
    {
        // Node *newNode = new Node(val);
        h = newNode;
        t = newNode;
    }
    else
    {
    //    Node *newNode = new Node(val);
        newNode->next=h;
        h = newNode;
    }
}

void PrintLinkList(Node *&h)
{
    Node *temp = h;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}


int main()
{
    Node* h = nullptr;
    Node* t = NULL;

    for(int i = 0; i<6;i++){
        insertAtEnd(i,h,t);
    }
    // insertAtEnd(10, h, t);
    // insertAtEnd(20, h, t);
    // insertAtEnd(30, h, t);

    dikhao(h);
};
