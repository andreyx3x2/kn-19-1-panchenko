#include <iostream>
#include <conio.h>
#include <complex>
#include <cmath>
using namespace std;

struct Complex
{
	float n1;
	float n2;
};

void add(Complex a, Complex b)
{
	complex<double>x(a.n1, a.n2);
	complex<double>y(b.n1, b.n2);
	complex<double>z = x + y;
	if (z.imag()<0) cout << round(z.real()*10)/10 <<  round(z.imag()*10)/10 << "i" << endl;
	else if (z.imag()>0) cout << round(z.real()*10)/10 << "+" << round(z.imag()*10)/10 << "i" << endl;
	else if ((z.real()==0)&&(z.imag()==0)) cout << "0" << endl;
	else if (z.imag()==0)   cout << round(z.real()*10)/10 <<endl;
}

void substruct(Complex a, Complex b)
{
	complex<double>x(a.n1, a.n2);
	complex<double>y(b.n1, b.n2);
	complex<double>z = x - y;
	if (z.imag()<0) cout << round(z.real()*10)/10 <<  round(z.imag()*10)/10 << "i" << endl;
	else if (z.imag()>0) cout << round(z.real()*10)/10 << "+" << round(z.imag()*10)/10 << "i" << endl;
	else if ((z.real()==0)&&(z.imag()==0)) cout << "0" << endl;
	else if (z.imag()==0)   cout << round(z.real()*10)/10 <<endl;
	
}

void multiply(Complex a, Complex b)
{
	complex<float>x(a.n1, a.n2);
	complex<float>y(b.n1, b.n2);
	complex<float>z = x * y;
	if (z.imag()<0) cout << round(z.real()*10)/10 <<  round(z.imag()*10)/10 << "i" << endl;
	else if (z.imag()>0) cout << round(z.real()*10)/10 << "+" << round(z.imag()*10)/10 << "i" << endl;
	else if ((z.real()==0)&&(z.imag()==0)) cout << "0" << endl;
	else if (z.imag()==0)   cout << round(z.real()*10)/10 <<endl;
}

void divide(Complex a, Complex b)
{
	complex<double>x(a.n1, a.n2);
	complex<double>y(b.n1, b.n2);
	complex<double>z = x / y;
	if (z.imag()<0) 	cout << round(z.real()*10)/10 <<  round(z.imag()*10)/10 << "i" << endl;
	else if (z.imag()>0) cout << round(z.real()*10)/10 << "+" << round(z.imag()*10)/10 << "i" << endl;
	else if ((z.real()==0)&&(z.imag()==0)) cout << "0" << endl;
	else if (z.imag()==0)   cout << round(z.real()*10)/10 <<endl;
}

void showchoice()
{
	cout<<"+"<<endl;
	cout<<"-"<<endl;
	cout<<"*"<<endl;
	cout<<"/"<<endl;
	cout<<endl;	
}

int main()
{
	 setlocale(LC_ALL, "rus");
	Complex a;
	Complex b;
	char s;
	cout<<endl;

	while (true)
	{
		cout << "Введите действительную часть 1-го числа" << endl;
		cin >> a.n1;
		cout << "Введите мнимую часть 1-го числа" << endl;
		cin >> a.n2;
		cout << "Введите действительную часть 2-го числа" << endl;
		cin >> b.n1;
		cout << "Введите мнимую часть 2-го числа" << endl;
		cin >> b.n2;
		


		cout << "Выберите операцию: " << endl;
		cout << endl;
		showchoice();
		cin >> s;
		switch (s)
		{
		case '+': add (a, b);
			break;
		case '-':    substruct(a, b);
			break;
		case '*': 	 multiply(a, b);
			break;
		case '/':    divide(a, b);
			break;
		default : cout << "Недопуcтимое значение" << endl; 
		break;
		}
		cout<<endl;

	}
	return 0;
	
	}
