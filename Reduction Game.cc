#include <iostream>
#include <algorithm>
using namespace std;

int min(int a,int b){
    if(a<b)
     return a;
    else
     return b;
}
int main()
{
   int t;
   cin>>t;
   
   for(int i=0;i<t;i++){
       int n,k;
       cin>>n;cin>>k;
       int arr[n];
       for(int j=0;j<n;j++){
           cin>>arr[j];
       }
       sort(arr,arr+n);
       int y=1;
       for(int x=0;x<n;x++){
            
               while(min(arr[x],arr[y])>k)
               {
                   arr[x]--;
                   arr[y]--;
                  
               }
           
           y++;
           if(y==n)
            break;
       }
       int sum = 0;
       for(int z=0;z<n;z++){
           sum += arr[z];
       }
       cout<<sum<<endl;
   }
   return 0;
}