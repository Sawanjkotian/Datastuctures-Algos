#include<iostream>
using namespace std;
class Node{

    public:
    int data;
    Node *next;

    //Constructor
    Node(int data){
        this->data = data;
        this-> next = NULL;
    }

    ~Node(){
        int value = this->data;

        //memory free
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<< "memory is free for the node with data " <<value <<endl;
    }

};

void insertAtHead(Node* &head, int d);
void insertAtEnd(Node* &tail, int d);

void insertAtPosition(Node* & tail,Node* & head, int position, int d)
{

     if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt<=position)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL)
    {
        insertAtEnd(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
 
void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail->next=temp;
    tail = tail->next;
}

void deleteAtPos(Node* &head, int position)
{
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
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

        prev->next = cur->next;

        cur->next = NULL;
        delete cur;

    }

}

void print(Node* &head){

    Node* temp = head;

    while(temp!=NULL)
    {
        cout << temp -> data <<" " ;
        temp = temp->next;
    }
    cout<<endl;

}

int main(){

    Node* node1 = new Node(20);
    // cout<< node1->data << endl;
    // cout<< node1->next << endl;

    Node* head = node1;
    Node* tail = node1;

    print(head);
    insertAtEnd(tail, 12);
    print(head);

    insertAtEnd(tail, 15);
    print(head);

    insertAtEnd(tail, 50);

    print(head);

    insertAtPosition(tail,head,3,  100);

    print(head);

    cout<<" Head " << head->data <<endl;
    cout<<" Tail " << tail->data <<endl;

    deleteAtPos(head, 1);
    print(head);

    deleteAtPos(head, 3);
    print(head);
}
