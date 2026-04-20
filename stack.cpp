#include <iostream> 
using std::cout; 
using std::endl; 
class myStack{ 
  public: 
  int *arr; 
  int top; 
  int capacity;  

  myStack(int cap){ 
    capacity=cap; 
    arr=new int[capacity]; 
    top=-1; } 

  void display(){ 
    if(top == -1){ 
      cout << "Stack is empty" << endl; 
      return;} 
    cout << "Stack elements (top to bottom):"; 
    for(int i = top; i >= 0; i--){ 
      cout << arr[i] << " ";} 
     cout << endl;} 

  int peek(){ 
    if(top==-1){ 
    cout<<"Stack is empty"<<endl; 
    return -1;} 
    return arr[top];} 

  void push(int x){
    if(top==capacity-1){ 
      cout<<"Stack overflow"; 
      return;} 
    arr[++top]=x;} 

  int pop(){ 
    if(top==-1){ 
      cout<<"Stack Underflow"; 
      return -1;} 
    return arr[top--];} 

  bool isempty(){ 
    return (top==-1);} 

  bool isfull(){ 
    return (top==capacity-1);}
  }; 

int main(){ 
  myStack st(4); 
  st.push(10); st.push(700); 
  st.push(79); st.push(8); st.display();  
  cout<<"Popped "<<st.pop()<<endl; 
  st.display();  
  cout<<"Top element "<<st.peek()<<endl; 
  cout<<"isempty "<<(st.isempty()?"Yes":"No")<<endl; 
  cout<<"isfull "<<(st.isfull()?"Yes":"No")<<endl;
}
