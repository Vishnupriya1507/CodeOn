#include <iostream>
#include <string.h>
using namespace std;


int main()
  {
    char arr[50];
    cin>>arr;
    int i=0;
    int t=strlen(arr)-1; //total no of substrings for a particular i
    
    int m=strlen(arr)-1;  //total no of substrings
   int j=0;  
    while(m>=0)
      {int k=i;
          while(t>=0)
            {cout<<"{";
                for(int p=i;p<=j;p++)
                  {
                      cout<<arr[p];
                  }
                  t--;
            cout<<"}"<<endl;
            j++;
            }
           
         i++;
      t=strlen(arr)-(i+1);
      j=i;
      m--;   
            
      }
      
  }