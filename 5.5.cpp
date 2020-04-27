#include <iostream>
#include <conio.h>
using namespace std;
void left(int A[4][4], int  size)
{
	setlocale(LC_ALL, "rus");
	int sum = 0;
	for (int i = 0, j = 0;i < size;i++, j++)

		sum = sum + A[i][j];
	cout << "Сумма левой диагонали:  " << sum<<endl;
}
void right(int A[4][4], int size)
{
	setlocale(LC_ALL, "rus");
	int sum = 0;
	for (int i = size - 1, j = 0; i >= 0; i--, j++)
		sum = sum + A[i][j];
	cout << "Сума правой диагонали:  " << sum<<endl;


}


int main()
{
	setlocale(LC_ALL, "rus");
	int const N = 4;
	int A[N][N];
	int n = 10;


	for (int i = 0; i < N; i++)
	{
	
		for (int j = 0; j < N; j++, n++)
		{
			A[i][j] = n; cout << A[i][j] << " ";
		}
			cout << endl;
	}

	left(A, N);
	right(A, N);


	getch();
	return 0;
}
