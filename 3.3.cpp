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
    cout << "Отгадайте число (от 1 до 100):\n";
    cin >> number;
 
    if (secret < number) cout << "Секретное число меньше, попробуйте ещё раз!\n";
    else
        if (secret > number) cout << "Секретное число больше, попробуйте ещё раз!\n";
  } while (secret != number);
 
  cout << "Поздравляю!Вы победили!";
   getch();
  return 0;
}
