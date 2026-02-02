#include <iostream>

struct Node{
    int data;
    Node* next;
     Node (int new_data){
         data=new_data;
         next=nullptr;
     }
};

//Function to inset new node at the beginning
Node* insertAtFront(Node* head, int new_data){
    // Create new node with given data
    Node* new_node = new Node(new_data);
     
    // make next of new node point to current head
    new_node->next=head;
    
    //return new node as a new head
    return new_node;
}

//Function to print Linked List
void printList(Node* head){
    Node* curr=head;
    while(curr != nullptr){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = New Node(5);
    
    cout << "Original Linked List";
    printList(head);
    
    cout << "Enter value to insert at the front";
    int data;
    cin >> data;
    
    cout << "After inserting node at the front";
    cin >> data;
    head = insertAtFront(head, data);
    
    
    printList(head);
    
    
    return 0;
}
