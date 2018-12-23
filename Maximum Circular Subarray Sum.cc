//Note that the above algorithm doesn’t work if all numbers are negative 
//e.g., {-1, -2, -3}. It returns 0 in this case. 
//This case can be handled by adding a pre-check to see if
// all the numbers are negative before running the above algorithm.

#include <iostream>
using namespace std;

int main() {
    
    int testcases;
    cin>>testcases;
    int n,total_sum=0;
  while(testcases)
    {
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          total_sum+=arr[i];
      }
     
    int cs=0,ms1=0;    
    for(int i=0;i<n;i++)  //applying kadane's algorithm
     {
         cs = cs + arr[i];
         if(cs < 0)
            cs = 0;
        ms1=max(cs,ms1);
     }
    for(int i=0;i<n;i++)
      {
          arr[i]=-arr[i];   //inverting the array and then applying kadane's algo
      }
     
    int cs_=0,ms_=0;
    for(int i=0;i<n;i++)
     {
         cs_=cs_ + arr[i];
         if(cs_<0)
            cs_=0;
        ms_=max(cs_,ms_);
     }
     int ms2 = total_sum + ms_;   //note it
     cout<<max(ms2,ms1)<<endl;
     testcases--;
    }
   return 0;  
  
}