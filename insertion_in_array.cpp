#include <iostream> 
using namespace std; 
int main(){ 
int array[6]; 
int location, value; 
int max=5; 
cout << "Enter 5 integer values:"<<endl; 
for(int i=0; i<max; i++){ 
cin >> array[i]; 
} 
cout << "Enter the location (index starts from 0): "; 
cin >> location; 
// shift elements to the right 
cout << "Enter the new value: "; 
cin >> value; 
for(int i = max; i>location; i--){ 
array[i]=array[i - 1]; 
} 
//Insert the new value 
array[location] = value; 
cout << "Array after insertion: " << endl; 
for (int i = 0; i<=max; i++){ 
cout << array[i] << endl; 
} 
return 0; 
} 
