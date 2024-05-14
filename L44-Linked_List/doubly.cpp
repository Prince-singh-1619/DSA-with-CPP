#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node with data "<<val<<endl;
    }
};

//traversal of linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

//gives length of linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int data){
    //inserting at head
    if(position == 1){
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position-1){
        temp = temp->next;
        count++;
    }

    // inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail, data);
        return ;
    }

    //creating a node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* &head){
    // deleting head node
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr -> next;
            count++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail= node1;

    print(head);
    // cout<<getLength(head)<<endl;

    insertAtHead(head, 11);
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtHead(head, 18);
    print(head);

    insertAtTail(tail, 23);
    print(head);

    insertAtPosition(tail, head, 2, 90);
    print(head);

    insertAtPosition(tail, head, 1, 95);
    print(head);

    insertAtPosition(tail, head, 8, 98);
    print(head);  

    deleteNode(3, head);
    print(head);

    deleteNode(1, head);
    print(head);

    return 0;
}