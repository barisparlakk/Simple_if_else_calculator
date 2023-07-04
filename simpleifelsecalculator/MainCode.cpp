#include <iostream>
using namespace std;

int main() {

	float number1, number2, OperationResult;
	char operation;

	cout << " Welcome to the simple if-else calculator. Please type the two numbers you want to do operation with by leaving a blank between them. " << endl;
	cin >> number1 >> number2;
	cout << endl << endl;
	cout << "   You have determined the numbers you want to do operation with. Now let's choose which operation you want to do. " << endl << " For the addition +," << endl << " For the extraction -," << endl;
	cout << " For the multiplication *," << endl << " For the division operation, type the / sign. " << endl;
	cin >> operation;
	cout << endl;

	if (operation == '+')
	{
		OperationResult = number1 + number2;
		cout << " Result of the addition operation = " << OperationResult << endl;
		cout << "  Operation is finished. Press a random key to close the program. " << endl;
		cout << endl << endl;
	}
	
	else if (operation == '-') 
	{
		OperationResult = number1 - number2;
		cout << " Result of the extraction operation = " << OperationResult << endl;
		cout << "  Operation is finished. Press a random key to close the program. " << endl;
		cout << endl << endl;
	}
	
	else if (operation == '*') 
	{
		OperationResult = number1 * number2;
		cout << " Result of the multiplication operation = " << OperationResult << endl;
		cout << "  Operation is finished. Press a random key to close the program. " << endl;
		cout << endl << endl;
	}
	
	else if (operation == '/')
	{
		OperationResult = number1 / number2;
		cout << " Result of the division operation = " << OperationResult << endl;
		cout << "  Operation is finished. Press a random key to close the program. " << endl;
		cout << endl << endl;
	}

	return 0;
}