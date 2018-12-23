#include <iostream>
#include <string.h>
using namespace std;



int main() {
    int row,col;
    cin>>row>>col;
    
    int arr[row][col];
    
    int startcol=0,startrow=0,endcol=col-1,endrow=row-1;


    // for taking input in array
    for(int i=0;i<row;i++)
      {
          for(int j=0;j<col;j++)
            {
                cin>>arr[i][j];
            }
      }  

    //prints matrix's transverse
      
    for( int i=startcol;i<=endcol;i++)
      {
          for(int j=endrow;j>=0;j--)
            {
                cout<<arr[j][startcol]<<' ';
            }
            cout<<' '<<endl;
            startcol++;
      }
     
    
	return 0;
}