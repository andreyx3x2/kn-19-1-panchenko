#include <iostream>
#include <ctime>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main ()
{ 
setlocale (LC_ALL, "rus");
 srand ( time(NULL) );                 
 int secret = rand() % 91 + 10;  
 cout<< "Случайное число:  " <<secret<<"\n";
  
  
  getch();
  return 0; 
}
