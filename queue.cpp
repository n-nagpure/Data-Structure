#include <iostream> 
using namespace std; 
#define MAX 5 
class Queue { 
int arr[MAX]; 
int front, rear; 
public: 
Queue() { 
front = -1; 
rear = -1; 
} 
void enqueue(int x) { 
if(rear == MAX - 1) { 
cout << "Queue Overflow\n"; 
} else { 
if(front == -1) { 
front = 0; 
} 
arr[++rear] = x; 
cout << x << " inserted\n"; 
} 
} 
void dequeue() { 
if(front == -1 || front > rear) { 
cout << "Queue Underflow\n"; 
} else { 
cout << arr[front] << " deleted\n"; 
front++; 
} 
} 
void display() { 
if(front == -1 || front > rear) { 
cout << "Queue is empty\n"; 
} else { 
cout << "Queue elements:\n"; 
for(int i = front; i <= rear; i++) { 
cout << arr[i] << " "; 
} 
cout << endl; 
}}
}; 
int main() { 
Queue q; 
int choice, value; 
do { 
cout << "\n1.Enqueue  2.Dequeue  
3.Display  4.Exit\n"; 
cout << "Enter choice: "; 
cin >> choice; 
switch(choice) { 
case 1: 
cout << "Enter value: "; 
cin >> value; 
q.enqueue(value); 
break; 
case 2: 
q.dequeue(); 
break; 
case 3: 
q.display(); 
break; 
case 4: 
cout << "Exit\n"; 
break; 
default: 
cout << "Invalid choice\n"; 
} 
} while(choice != 4); 
return 0; 
}
