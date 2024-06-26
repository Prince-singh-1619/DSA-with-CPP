#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    //destructor
    ~Node() {
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free with data "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int data){
    //empty list
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list
        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }
        //element found -> curr is representing element's node
        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;

    //empty list
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail = tail -> next;
    }while(tail != temp);
    {
        cout<<endl;
    }
}

void deleteNode(Node* &tail, int value){

    //empty list
    if(tail == NULL){
        cout<<"List is empty, Please check again"<<endl;
        return;
    }
    else{ //non-empty
          //assuming that "value" is present in the linked list
          Node* prev = tail;
          Node* curr = prev -> next;

          while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
          }
          prev -> next = curr -> next;

          //1 Node linked list
          if(curr == prev){
            tail = NULL;
          }
          // >=2 Node linked list
          else if(tail == curr){
            tail = prev;
          }
          curr -> next = NULL;
          delete curr;
    }
}

bool isCircularList(Node* head){
    //empty list
    if(head == NULL){
        return NULL;
    }

    Node* temp = head -> next;
    while(temp!=NULL && temp!=head){
        temp = temp->next;
    }

    if(temp == head){
        return true;
    }

    return false;
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool>visited;
    Node* temp = head;

    while(temp != NULL){
        //cycle is present
        if(visited[temp] == true){
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

int main(){
    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    if(isCircularList(tail)){
        cout<<"circular"<<endl;
    }
    else{
        cout<<"Not circular"<<endl;
    }
}