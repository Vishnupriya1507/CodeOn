#include <iostream>
using namespace std;

int main() {
    
    char arr[50];
    cin>>arr;
    int digit;
    int i=0;
    if(arr[0]==9)
      {
          i++;
      }
      int temp=0;   //temp is a temporary variable for equating it to arr[i] whenever required without directly changing arr[i]
      for( ;arr[i]!='\0';i++)
        {   digit=arr[i]-'0';  //convertion into integer
            temp = 9-digit;
            if (temp>digit)
              {
                  
                  arr[i]=digit+'0';
              }
            else
               {
                 
                 arr[i]=temp +'0';
               }
        }
    
       
        cout<<arr<<endl;
  
  return 0;
}