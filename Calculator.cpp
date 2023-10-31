#include<iostream>
using namespace std;
int main()
{	
	cout << "Welcome to The Calculator!!!" << endl;
	while (1) {
		double num1, num2;
		int choise1, choise2;
		cout << "Enter the first number:";
		cin >> num1;
		cout << "Enter the second number:";
		cin >> num2;
		cout << endl <<"Enter your choise:" << endl <<"1. Add" << endl << "2. Substract" << endl << "3. Multiplication" << endl <<"4. Division" << endl;
		cin >> choise1;
		switch (choise1) {
			case 1:
				cout << "Result :" << num1 + num2 << endl;
				break;
			case 2:
				cout << "Result :" << num1 - num2 << endl;
				break;
			case 3:
				cout << "Result :" << num1 * num2 << endl;
				break;
			case 4:
				cout << "Result :" << num1 / num2 << endl;
				break;
			default:
				cout << "Entered Invalid Number." << endl;
				break;
		}
		cout << "Press 1 to do Calculation Again or Press 0 to exit." << endl;
		cin >> choise2;
		if (choise2 == 0) {
			exit(0);
		}
		if (choise2 == 1) {}
	}
	return 0;
}