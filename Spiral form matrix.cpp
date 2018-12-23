#include <iostream>
using namespace std;

void spiral(int arr[][4],int,int);


int main() {
	int arr[3][4]={{1,2,3},{5,6,7},{9,10,11,12}};
	spiral(arr,3,4);

	return 0;
}


void spiral(int arr[][4],int R,int C)
{
    int startcol=0,endcol=C-1,endrow=R-1,startrow=0;
    while(startcol<=endcol && startrow<=endrow)
      {
          // **********
          
           for(int k=startcol;k<endcol;k++)
                  {
                      cout<<arr[startcol][k]<<",";
                      
                  }
             
           /*         *
                      *
                      *
                      *
                      *
                      *
           */

           for(int k=startrow;k<endrow;k++)
                  {
                      cout<<arr[k][endcol]<<",";
                  
                      
                  }
                  
           // ******** 
          if(startrow<endrow){
          for(int k=endcol;k>startcol;k--)
                  {
                      cout<<arr[endrow][k]<<",";
                      
                  } 
          }
                  
      /*
             *
             *
             *
             *
             *
             *
               */  
          if(startcol<endcol){   
          for(int k=endrow;k>startrow;k--)
                  {
                      cout<<arr[k][startrow]<<",";
                     
                     
                  }
          }
                  cout<<endl;
               
             
            startcol++;endcol--;startrow++;endrow--;
           
      }
      
}
