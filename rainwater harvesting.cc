#include<iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];      //Takes elements in array
      
    }
    int *left,*right;
    int c ,sum=0;
    
  for(int i=1;i<n-1;i++)
    { 
      left =max_element(arr,arr+i);      //NOTE : finds max element in range [first iterator,last iterator)
      right =max_element(arr+i+1,arr+n);



      c=min(*left,*right);      //min of a and b
      


    // Calculates the accumulated water element by element 
    // consider the amount of water on i'th bar, the 
    // amount of water accumulated on this particular 
    // bar will be equal to "min(*left,*right) - arr[i]" . 
      
    if(c>arr[i])
         
         sum=sum+(c-arr[i]);
      
     }

    cout<<"sum is: "<<sum;
	return 0;
}