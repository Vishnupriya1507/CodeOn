 METHOD 1
#include <iostream>
#include <string.h>
using namespace std;

bool is_permutation(char *s1,char *s2) {
      int freq[26]={0}; //assuming char from a-z;
  
   int l1=strlen(s1);
   int l2=strlen(s2);
   

   //iterating over string1=s1
   for(int i=0;i<l1;i++)
   {
     freq[s1[i]-'a']++;
   }

   //iterating over string2=s2
   for(int i=0;i<l2;i++)
   {
    freq[s2[i]-'a']--;
   }
   

   //Finally check if all frequencies are zero
   for(int i=0;i<26;i++)
   {
    if(freq[i]!=0)  //Even if one freq array has non-zero value then strings aren't permutation.
      return false;
    
   }
   return true;
  
}

int main()
  {
     char s1[100],s2[100];
     cin>>s1>>s2;
     if(is_permutation(s1,s2))
        {cout<<"Yes permutation"<<endl;
        return 1 ;
        }
    cout<<"not permutation"<<endl;
    return 0;
  }





  METHOD 2

#include <iostream>
#include <string.h>
using namespace std;


int main()
  {
    char arr[50]="abbca",brr[50]="acbba";
    
    
    
    int i=0;
    int j= strlen(brr)-1;
    cout<<j<<endl;
    while(i<strlen(arr)&&j>=0)
      {
          if(arr[i]==brr[j])
            {   
                i++;
                j--;
            }
          else
            {cout<<"false"<<endl;
            break;
            }
        
      }
      if(i==strlen(arr)||j==0)
         cout<<"true"<<endl;
    
      
  }