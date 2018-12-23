#include <iostream>
#include <string.h>
using namespace std;

int main() 
{
    string arr="Codingblocks";
    int n=arr.length();
    char brr[n];
    int k=0;
    int cut=3;
    
    for(int i=n-cut;i<n-cut-1;i++)
    {
        if(arr[i]=='\0')
          {
              i=0;
          }
         else
          { cout<<arr[0]<<endl;
              brr[k]=arr[i];
              k++;
          }
    }
    for(int j=0;j<n;j++)
       cout<<brr[j]<<endl;
    cout<<arr.length()<<endl;

}