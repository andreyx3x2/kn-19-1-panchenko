#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int arr[10], i, sum = 0, b = 0;
    float aver;
    cout << "������� �������� �������:\n";
    for(i=0; i<10; i++)
        cin >> arr[i];
    for(i=0; i<10; i++)
	{
        if(arr[i] > 0)
		{
            sum += arr[i];
            b++;
        }
    }
    aver = (float)sum/b;
    cout << "����� ���������:  " <<sum << endl;
    cout << "������� �������������� �����: " << aver << endl;
    getch();
	return 0;
}
