#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{ setlocale (LC_ALL, "rus"); 
  const int R = 5;
  const int C = 4;
  int A [R][C];
  
      int n = 10;
	for (int i = 0; i < R; i++)
	{
	
		for (int j = 0; j < C; j++, n++)
		{
			A[i][j] = n; cout << A[i][j] << " ";
		}
			cout << endl;
	}
	cout << endl;
int B [R][C];
int N = 15;
 for (int i = 0; i < R; i++)
	{
	
		for (int j = 0; j < C; j++, N++)
		{
			B[i][j] = N; cout <<B[i][j] << " ";
		}
			cout << endl;
}
cout << endl;
int D [R][C];

 for (int i = 0; i < R; i++)
	{
	
		for (int j = 0; j < C; j++, N++)
		{
			D[i][j] = A[i][j]+B[i][j]; cout << D[i][j] << " ";
		}
			cout << endl;
}
getch();
return 0;
}






