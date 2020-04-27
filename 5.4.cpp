#include <iostream>
#include <conio.h>
using namespace std;

void MIX(int A[],  int B[],   int C[],int n1,int n2, int n3)
{
	int n = 0;
	int j=n3-1;
	for (int i = 0; i < n1; i++)
	{
		if (A[i] % 2 == 0)
		  {
			 C[n] = A[i]; 
			 n++;
		  }
		 else 
		 { 
	       C[j] = A[i];
	  	   j--;
         }
	}

	for (int i = 0; i < n2; i++)
	{
		if (B[i] % 2 == 0)
		{
	     	C[n] = B[i]; 
	    	n++;
     	}
	else
	 {
		C[j] = B[i]; 
		j--;
	 }
	}

	


 for (int i=0; i<n3; i++)
 {
 	cout<<C[i]<<" ";
 }
 

}

int main()
{   
	int A[8] = { 2, 5, 3, 5, 2, 23, 1, 6 };
	int B[7] = { 12, 8, 9, 6, 7, 4, 24};
	int C[15];
	int n1=sizeof(A)/4;
	int n2=sizeof(B)/4;
	int n3=n1+n2;
	
    for (int i=0; i<n1; i++ )
    {
    	cout<<A[i]<<" ";
    }
    cout<<endl;
    
    for (int i=0; i<n2; i++ )
    {
    	cout<<B[i]<<" ";
    }
    cout<<endl;
    
    
	MIX(A,B,C, n1, n2, n3);
	




	getch();
	return 0;


}
