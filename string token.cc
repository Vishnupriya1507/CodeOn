#include <iostream>
#include <string.h>
using namespace std;

char * mystrtok(char str[],char delim)
  {
      static char*input =NULL;
      if(str!=NULL)
        {
           input = str;
        }
      if(input==NULL)
        {
            return NULL;  // when string gets over
        }
        char * output =new char[strlen(input)+1];  //+1 so that '\0' can be added 
        int i;
        for(i=0;input[i]!='\0';i++)  // NULL is '\0'
          {
              if(input[i]!=delim)
                {
                    output[i]=input[i]; //copying input elemants in output array
                    
                }
              else
                {
                    output[i]='\0';
                    input=input+i+1;  // since input is static so we'll have it in storage.
                    return output;
                }
          }  //input string has also ended   


    output[i]='\0';

    input=NULL; 

    return output;
  }

int main() {
	char str[]="this is hiii, !!!";
	char *ptr;
	ptr= mystrtok(str,' ');
	while(ptr!=NULL)  //untill string gets over
	  {
	      cout<<ptr<<endl;
	      ptr=mystrtok(NULL,' ');
	  }
	  
	return 0;
}