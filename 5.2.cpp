#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{ setlocale (LC_ALL, "rus");
int arr [8];
int mas [8];
for (int i=0; i<8; i++)
{   cout << "Введите элемент массива\n";
	cin >> arr [i];
}


for (int i=7,j=0; i>=0; i--,j++)
{ mas [j] = arr [i];
  cout <<"\n"<< mas [j] << endl; 
 
}
	getch();
	return 0;
	
}
