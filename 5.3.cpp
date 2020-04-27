#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{ setlocale (LC_ALL, "rus");
int arr [8];
for (int i=0; i<8; i++)
{   cout << "Введите элемент массива\n";
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
    cout<<endl<<"Максимальный элемент массива: "<< max << endl;
    cout <<"Минимальный элемент масисва: "<< min << endl;
         getch();
		return 0;
    
}
