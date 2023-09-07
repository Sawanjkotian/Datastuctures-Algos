#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){

        int val = this->data;
        if(next!=NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory has been released " << val << endl;
    }

};

//Traversing the linkedlist
void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<" "<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
}

// Getting the lenght of the linkedlist
int getLength(Node* head)
{
    int cnt = 0;
    Node* temp = head;

    while(temp!=NULL)
    {
        temp = temp->next;
        cnt++;
    }

    return cnt;
}

void insertAthead(Node* &head, int d)
{
    Node* temp = new Node(d);
    Node* cur = head;

    temp->next = cur;
    cur->prev = temp;

    temp->prev =NULL;

    head = temp;
}

void insertAttail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = tail->next;
    tail->next = NULL;
}

void insertAtPos(Node* &tail, Node* &head, int position, int d)
{
    
     if(position == 1){
        insertAthead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL)
    {
        insertAttail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    
    temp->next->prev = nodeToInsert;
    nodeToInsert->prev = temp;
    temp->next= nodeToInsert;
}

void deleteAtPos(Node* &head, int position)
{
    if(position == 1){
        Node* temp = head;
        head = head->next;
        
        temp->next->prev = NULL;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* cur = head;
        Node* prev = NULL;
        int cnt=1;

        while(cnt < position)
        {
            prev = cur;
            cur=cur->next;
            cnt++;
        }

        cur -> prev =  NULL;
        prev->next = cur-> next;
        cur->next = NULL;
        delete cur;

    }

}

int main()
{
    Node* node1 = new Node(5);
    Node* head = node1;
    Node* tail = node1;
    
    print(head);

    cout<<" The lenght of the doubly linked list is: "<< getLength(head) << endl;

    insertAthead(head, 2);

    print(head);
    
    insertAttail(tail, 6);
    print(head);

    insertAtPos(tail, head, 2, 1000);
    print(head);

    deleteAtPos(head, 2);
    print(head);
}