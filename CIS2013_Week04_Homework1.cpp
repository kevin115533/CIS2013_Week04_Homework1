#include <iostream>
using namespace std;

void basicMath(int firstNumber,int secondNumber,char op) {
	switch (op)
	{
	case('+'):
		cout << "Your result is " << firstNumber + secondNumber << endl;
		break;
	case('-'):
		cout << "Your result is " << firstNumber - secondNumber << endl;
		break;
	case('*'):
		cout << "Your result is " << firstNumber * secondNumber << endl;
		break;
	case('/'):
		cout << "Your result is " << firstNumber / secondNumber << endl;
		break;
	default:
		cout << "That is not a valid math operator" << endl;
	}

}

void squareRoot(int num) {
	cout << "The square root of " << num << " is " << sqrt(num) << endl;
}

void findMod(int firstNumber, int secondNumber) {
	cout << "Your result is " << firstNumber % secondNumber << endl;
}
int main()
{
	double firstNumber, secondNumber;
	int num;
	char op, question, option;
	bool goAgain = true;

	while(goAgain)
	{
		cout << "What would you like to do?" << endl;
		cout << "1. Basic math" << endl << "2. Find the square root" << endl << "3. Find the modulus" << endl << "Enter option 1, 2, or 3" << endl;
		cin >> option;

		if (option == '1') {
			cout << "Do you want to +,-,*, or/?" << endl;
			cin >> op;

			cout << "Please enter your first number" << endl;
			cin >> firstNumber;

			cout << "Please enter your second number" << endl;
			cin >> secondNumber;
			basicMath(firstNumber,secondNumber,op);
			}	
		
		else if (option == '2') {
			cout << "What number do you want to the square root?" << endl;
			cin >> num;
			squareRoot(num);
		}

		else if (option == '3') {
			cout << "Please enter your first number" << endl;
			cin >> firstNumber;

			cout << "Please enter your second number" << endl;
			cin >> secondNumber;

			findMod(firstNumber, secondNumber);

		}

		else {
			cout << "Please enter a valid option" << endl;
		}
		
		cout << "Do you want to go again? Enter y or n" << endl;
		cin >> question;
		if(question != 'y'){goAgain = false;}
	}
	return 0;
}
