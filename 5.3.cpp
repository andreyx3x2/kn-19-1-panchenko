#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{ setlocale (LC_ALL, "rus");
int arr [8];
for (int i=0; i<8; i++)
{   cout << "������� ������� �������\n";
	cin >> arr [i];
}
int max = arr [0];
   for (int i = 0; i < 8; i++) {
        if (arr[i] > max) max = arr[i];
        
    }
int min = arr [0];
   for (int i = 0; i < 8; i++)
   { if (arr[i] < min) min = arr[i];
   
}     
    cout<<endl<<"������������ ������� �������: "<< max << endl;
    cout <<"����������� ������� �������: "<< min << endl;
         getch();
		return 0;
    
}
