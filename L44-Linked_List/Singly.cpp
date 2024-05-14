#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with with data "<<value<<endl;        
    }
};

void insertAtHead(Node* &head, int data){
    // new node create
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
};

void insertAtTail(Node* &tail, int data){
    //create new node
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = tail -> next;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int data){
    // insertion at start
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
    
    //insertion at last position
    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
    }

    //creating a node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* &head){
    //deleting head or first node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node
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

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
};

Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* fast = head;
    Node* slow = head;

    while(slow != NULL  &&  fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow -> next;

        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startOfLoop =  getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;

}

int main(){
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(tail);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(tail, head, 4, 23);
    print(head);

    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    deleteNode(3, head);
    print(head);

    return 0;
};