// Lab001.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "math.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); 

	float a = 12.17f, b = 7.03f, x = 5.02f;
	double y = pow((a*x) - (log(b - x)), 1.0 / 5); // 12 вариант
	cout << "Первый результат: " << y << endl;
	string rep;
	do
	{
		cout << ("Введите значения a, b, x: ") << endl;
		cin >> a;
		cin >> b;
		cin >> x;
		y = pow((a*x) - (log(b - x)), 1.0 / 5);
		cout << "Ответ: " << y << endl;
		cout << ("Желаете повторить? (yes/no)") << endl;
		cin >> rep;


	} while (rep == "yes");
	return 0;
}
