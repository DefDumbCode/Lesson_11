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
		else { cout << "�� ���� ������ ������!" << endl; }
		break;
	case '%':
		if (b != 0.0)
		{
			Ost(a, b);
		}
		else { cout << "�� ���� ������ ������!" << endl; }

	}

}

int main(char x, float a, float b)
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Hello("����");
	Hello("�����");
	Sum(1984, 148);

	L: cout << "��������:\n"
		"+	- ��������\n"
		"-	- ���������\n"
		"*	- ���������\n"
		"/	- �������\n"
		"%	- ������� �� �������\n";
	cout << "������� ��������:";
	cin >> x;
	cout << "������� ������ �����:";
	cin >> a;
	cout << "������� ������ �����:";
	cin >> b;
	Calc(x, a, b);
	goto L;

}


