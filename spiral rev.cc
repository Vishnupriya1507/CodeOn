#include <iostream>
using namespace std;

int main() {
	int m,n;
	
	int arr[3][4]={{1,2,3},{5,6,7},{9,10,11,12}};
	int startcol=0,startrow=0,endcol=4-1,endrow=3-1;
	
	while(endrow>=startrow && endcol>=startcol)
	{
	    for(int i=startcol;i<endcol;i++)
	      {
	          cout<<arr[startrow][i]<<endl;
	          
	      }
	    for(int j=startrow;j<endrow;j++)
	      {
	          cout<<arr[j][endcol]<<endl;
	      }
	    if(startrow<endrow){
	    for(int k=endcol;k>startcol;k--)
	     {
	         cout<<arr[endrow][k];
	        
	     }
	    }
	     if(startcol<endcol){
	    for(int l=endrow;l>startrow;l--)
	      {
	          cout<<arr[l][startcol];
	      }
	     }
	     startcol++;
	     startrow++;
	     endcol--;
	     endrow--;
	     
	}
	return 0;
}