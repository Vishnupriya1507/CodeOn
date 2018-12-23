#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d",&n);
	char arr[50];
	int count=0;
	for(int i=0;i<50;i++)
	  {
	      scanf("%c",&arr[i]);
	      
	  }
	 for(int i=0;i<strlen(arr)-1;i++)
	  {
	       if(arr[i]!='.')
	        {
	            count++;
	        }
	  }
	  if(count==0||count==1)
	    printf("safe");
	    
	    int a,b,m,c;
	  for(int i=0;i<strlen(arr)-1;i++)
	    {
	        if(arr[i]!='.')
	          {
	              a=i;
	              for(int j=i+1;j<strlen(arr);j++)
	               {
	                   if(arr[j]!='.')
	                      {
	                          b=j;
	                          m=(arr[i])+(arr[j]);
	                          c=a-b-1;
	                          if(c<0)
	                            c=-c;
	                          if(c<m)
	                           {
	                             printf("Unsafe");
	                             return 0;
	                               break;
	                           }
	                       else
	                         {i=j-1;
	                         
	                         break;
	                         }
	                      }
	               }  
	          }
	          
	    }
	printf("safe");
	return 0;
}