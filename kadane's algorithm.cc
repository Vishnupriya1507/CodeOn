#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n]={-4,1,3,-2,6,2,-1,-4,-1};
    
      int cs=0,ms=0;          //cs=current sum so far  and  ms=maximum sum so far
      int left=0,right=0;     //left and right are starting and ending index of subarray
      for(int i=0;i<n;i++)
        {
            cs=cs+arr[i];
            if (cs<0)
              {
                  cs=0;
                  left=i+1;   //as soon as cs<0 we won't add it to our ms and won't take that element in our array.
              }
              if(cs>ms)
                {right=i;
                cout<<right<<endl;
                }
            ms=max(cs,ms);
              
        }
        for(int i=left;i<=right;i++)
        cout<<arr[i]<<endl;
cout<<ms<<endl;
      	    
	return 0;
}