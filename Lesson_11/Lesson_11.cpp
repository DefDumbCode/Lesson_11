#include <iostream>
#include <string>
#include <Windows.h>
#include <math.h>

using namespace std;


void Hello(string name)
{

	cout << "Hello\t" << name << endl;

}

void Sum(int a, int b) 
{
	cout << "Sum = " << a + b << endl;
}

void Minus(int a, int b)
{
	cout << "Minus = " << a - b << endl;
}

void Mult(int a, int b)
{
	cout << "Mult = " << a * b << endl;
}

void Div(float a, float b)
{
	cout << "Div = " << a / b << endl;
}

void Ost(int a, int b)
{
	cout << "Ost = " << a % b << endl;
}

void Calc(char x, float a, float b)
{
	
	switch (x) 
	{
	case '+':
		Sum(a, b);
		break;
	case '-':
		Minus(a, b);
		break;
	case '*':
		Mult(a, b);
		break;
	case '/':
		if (b != 0.0)
		{
			Div(a, b);
		}
		else { cout << "На ноль делитб нельзя!" << endl; }
		break;
	case '%':
		if (b != 0.0)
		{
			Ost(a, b);
		}
		else { cout << "На ноль делитб нельзя!" << endl; }

	}

}

int main(char x, float a, float b)
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Hello("Иван");
	Hello("Борис");
	Sum(1984, 148);

	L: cout << "Действия:\n"
		"+	- сложение\n"
		"-	- вычитание\n"
		"*	- умножение\n"
		"/	- деление\n"
		"%	- остаток от деления\n";
	cout << "Введите действие:";
	cin >> x;
	cout << "Введите первое число:";
	cin >> a;
	cout << "Введите второе число:";
	cin >> b;
	Calc(x, a, b);
	goto L;

}


