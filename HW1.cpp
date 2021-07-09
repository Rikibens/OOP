#include <iostream>
#include "lab1_Q1.h"

using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n--)
	{
		int a{}, b{}, c{};

		char command;
		cin >> command;
		QUADRATIC q1, q2;
		switch (command) {
		case '+':
			//take q1 value 
			cin >> a >> b >> c;
			q1.a = a;
			q1.b = b;
			q1.c = c;
			//take q2 value
			cin >> a >> b >> c;
			q2.a = a;
			q2.b = b;
			q2.c = c;

			q1.add(q2);
			break;

		case 'p':
			//take q1 value for print
			cin >> a >> b >> c;
			q1.a = a;
			q1.b = b;
			q1.c = c;

			q1.print();
			break;

		case 'd':
			//take q1 value for determinant
			cin >> a >> b >> c;
			q1.a = a;
			q1.b = b;
			q1.c = c;

			q1.discriminant();
			break;



		default:
			cout << "wrong input!";
			break;
		}
	}

	system("pause");
}