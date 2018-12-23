#include<bits/stdc++.h> 
using namespace std; 
struct Interval 
{ 
    int start, end; 
}; 

int main()
  {
   int n;
   cin>>n>>;
   stack<int> mystack;
   Interval arr[]={{1,3},{6,9}};
   mystack.push(arr[0]);
    for (int i=1;i<n;i++)
      {  top_=mystack.top();
          if(top_.end()<arr[i].start)
            {  mystack.push(arr[i]);
            
            }
          else if(top_.end()<arr[i].end())
              {
                  top_.end()=arr[i].end();
                  mystack.pop();
                  mystack.push(top_);
              }
      }
      
     cout<<"merged array is ";
      while (!mystack.empty()) 
    { 
        Interval t =mystack.top(); 
        cout << "[" << t.start << "," << t.end << "] "; 
        mystack.pop(); 
    } 
      
  }
  
