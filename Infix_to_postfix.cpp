#include <iostream> 
#include <stack> 
#include <string> 
using namespace std; 
int precedence(char op) { 
if (op == '^') 
return 3; 
else if (op == '*' || op == '/') 
return 2; 
else if (op == '+' || op == '-') 
return 1; 
else 
return 0; 
} 

string infixToPostfix(string infix) { 
stack<char> st; 
string postfix = "";
for (int i = 0; i < infix.length(); i++) {
  char ch = infix[i]; 
  if (isalnum(ch)) {postfix += ch;} 
  else if (ch == '(') {st.push(ch);} 
  else if (ch == ')') { 
    while (!st.empty() && st.top() != '(') {
      postfix += st.top(); 
      st.pop();} 
      st.pop(); }

else { 
while (!st.empty() && 
precedence(st.top()) >= precedence(ch)) { 
postfix += st.top(); 
st.pop(); 
} 
st.push(ch); 
} 
} 
while (!st.empty()) { 
postfix += st.top(); 
st.pop(); 
} 
return postfix; 
} 

int main() { 
string infix;
cout << "Enter Infix Expression: "; 
cin >> infix; 
string postfix = infixToPostfix(infix); 
cout << "Postfix Expression: " << postfix; 
return 0;  
}
