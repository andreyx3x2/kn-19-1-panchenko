#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
 
int main ()
{ setlocale (LC_ALL, "rus");
  int number;
 
  srand ( time(NULL) );                 
 
  int secret = rand() % 100 + 1;                  
 
do {
    cout << "��������� ����� (�� 1 �� 100):\n";
    cin >> number;
 
    if (secret < number) cout << "��������� ����� ������, ���������� ��� ���!\n";
    else
        if (secret > number) cout << "��������� ����� ������, ���������� ��� ���!\n";
  } while (secret != number);
 
  cout << "����������!�� ��������!";
   getch();
  return 0;
}
