#include<iostream>
using namespace std;

int main() {
  int row,col;
  cin>>row>>col;
  int arr[row][col];


  //TAKES INPUT IN ARRAY
  for(int i=0;i<row;i++)   
     {
       for(int j=0;j<col;j++)
         {
           cin>>arr[i][j];
           
         }
     }
  int rowstart=0,rowend=row-1;
  
  for(int i=0;i<col;i++)
   {

     //CHECKS IF COL IS EVEN IF YES THEN PRINTS FROM TOP TO BOTTOM 
     if(i%2==0)    
     {
       while(rowstart!=row)
        {
          cout<<arr[rowstart][i]<<",";  //PRINTS FROM TOP TO BOTTOM 
          rowstart++;
        }
        rowstart=0;
      }

    
    //IF COL IS ODD THEN PRINTS FROM  BOTTOM TO TOP
     else        
     {
       while(rowend>=0)
           {
           cout<<arr[rowend][i]<<",";  //PRINTS FROM  BOTTOM TO TOP
           rowend--;
           }
        rowend=row-1;
      }
   }
   cout<<"END";
	return 0;
}