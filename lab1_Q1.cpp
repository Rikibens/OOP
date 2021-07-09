#include "lab1_Q1.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void QUADRATIC::print()
{
	//PRINT QUADRATIC FORMULA
	cout << a << "x^2+" << b << "x+" << c << endl;

}

void QUADRATIC::add(QUADRATIC q)
{
	//ADD TWO QUADRATIC FORMULAS
	//a1 + a2 need to change

	cout << a + q.a << "x^2+" << b + q.b << "x+" << c + q.c << endl;
}

void QUADRATIC::discriminant()
{
	//FIND DISCRIMINANT OF QUADRATIC FORMULA AND ANWSERS
	double d{};

	d = (b * b) - 4 * a * c;
	double x1, x2{};
	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "There are two roots:" << x1 << "," << x2 << endl;
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		cout << "There is a double root:" << x1 << endl;
	}
	else if (d < 0)
	{
		x1 = (-b / 2 * a) + sqrt(-d) / (2 * a);
		x2 = (-b / 2 * a) - sqrt(-d) / (2 * a);
		cout << "There are two roots:"<< (-b / 2 * a) <<" + " << sqrt(-d) / (2 * a) << "i" << ", " << (-b / 2 * a) << " - " << sqrt(-d) / (2 * a) << "i" << endl;
	}
}