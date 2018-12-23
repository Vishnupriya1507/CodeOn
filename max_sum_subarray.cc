#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n]={-4,1,3,-2,6,2,-8,-9,4};
    for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          
      }
      int sum=0,k=0,sum_arr[n*n];
      for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            
              {sum=0
                 for(int k=i;k<=j;k++) 
                  {sum=sum +arr[k];
                  cout << sum << endl;
                  
                  }
              }sum=0;
              
              
        }
	
	return 0;
}


//METHOD 2--KADANE'S ALGORITHM

#include<iostream>
#include <algorithm>
using namespace std;

int main() {
  int t;  //NO OF TESTCASES

  int n;   //NO OF ELEMENTS IN ARRAY
  
  cin>>t;
  
  int cs=0,ms=0;  //CURRENTSUM = 0, MAXIMUM SUM = 0 
  
  while(t)
  {
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
      {
      
        cin>>arr[i];
      
      }
    
    for(int j=0;j<n;j++)
      {
      
        cs=cs+arr[j];
        if(cs<0)  //CS=0 ---> -VE added to any sum will decrese the whole sum hense we don't consider that element in subarray and a new  subarray starts from next element 
          cs=0;    // hence cs again becomes 0
        else
          ms=max(cs,ms);
      
      }
      
      cout<<ms<<endl;
     t--;
  }
  
return 0;
}