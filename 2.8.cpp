#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
 
float n;
float i;
float sum=0;
int main()
{ setlocale (LC_ALL, "rus");
cout<< "1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/n       Введите n";
cin>>n;
for (i=1; i<=n; i++ )             
 {sum=sum+1/i;
 
 
 
 }            
 cout<<sum;                
getch();
return 0;
}
