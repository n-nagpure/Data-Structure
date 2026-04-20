#include <iostream>; using std::cout; using std::cin; using std::endl; 
struct Node{ 
    int data; Node* next; 
     Node (int new_data){ 
         data=new_data; 
         next=nullptr;}}; 
Node* insertAtFront(Node* head, int new_data){ 
    Node* new_node = new Node(new_data); 
    new_node->next=head; 
    return new_node;} 
void printList(Node* head){ 
    Node* curr=head; 
    while(curr != nullptr){ 
        cout << curr->data << " "; 
        curr = curr->next;} 
    cout << endl;} 
int main(){int data; 
    Node* head = new Node(2); 
    head->next = new Node(3); 
    head->next->next = new Node(4); 
    head->next->next->next = new Node(5); 
    cout << "Original Linked List: "; 
    printList(head); 
    cout << "Enter value to insert at the front: "; 
    cin >> data; 
    head = insertAtFront(head, data); 
    cout << "List after inserting node at the front: "; 
    printList(head);  
    return 0;} 

