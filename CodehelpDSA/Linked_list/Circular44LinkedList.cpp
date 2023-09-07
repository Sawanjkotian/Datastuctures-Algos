#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data=d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            next = NULL;
        }

        cout << "Memory has been released " << value << endl;
    }

};

void insertNode(Node* &tail, int pd, int d)
{
    Node* temp = new Node(d);
    Node* cur;
    cur = tail;

    while(cur->data != pd)
    {
        cur=cur->next;
    }
    cur=cur->next;

    temp->next = cur->next;
    cur->next = temp;

}

int main()
{

}