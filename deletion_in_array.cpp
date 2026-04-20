#include <iostream> 
using namespace std; 
int main() 
{    
int arr[100], n, pos; 
cout<<"Enter a size of array:"; 
cin>>n; 
cout<<"Enter elements:\n"; 
for(int i=0; i<n;i++){ 
cin>>arr[i]; 
} 
cout<<"Enter position to delete(1 to "<< n <<"): "; 
cin>>pos; 
if(pos <1 || pos>n){ 
cout<<"Invalid position"; 
return 0; 
} 
for(int i=pos; i<n-1; i++){ 
arr[i]=arr[i+1]; 
} 
n--; 
cout<<"Array aftre deletion:\n"; 
for(int i = 0; i < n;i++){ 
cout<<arr[i]<<" "; 
} 
return 0; 
}
