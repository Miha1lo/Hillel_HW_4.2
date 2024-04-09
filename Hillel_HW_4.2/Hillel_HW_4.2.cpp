
#include <iostream>

/*
	Calculate value depending on the operatin
	@param int value1 - first value
	@param int value2 - second value
	@param char - operation for calculation
	@return result of calculating or massage: "You can't divide by zero!!!" with result -1
*/
int calculateValues(int value1, int value2, char operation)
{
	switch (operation)
	{
	case '+':
		return value1 + value2;

	case '-':
		return value1 - value2;
	case '*':
		return value1 * value2;
	case '/':
		if (value2 != 0)
		{
			return value1 / value2;
		}
		else
		{
			std::cout << "You can't divide by zero!!!" << std::endl;
			return -1;
		}
	default:
		std::cout << "Invalid operation" << std::endl;
		break;
	}
}

/*
	Asks the user if he wants to continue
	@return true if enter - Y, false - if enter N
*/
bool continueCalculate()
{
	char choise;
	do 
	{
		std::cout << "Do you want to continue calculate? Enter Y/N: ";
		std::cin >> choise;
		switch (choise)
		{
		case 'Y':
			return true;
		case 'N':
			return false;
		default:
			std::cout << "Invalid choise. Try again!";
			break;
		}
	} while (true);
}

int main()
{	
	int firstNum;
	int secondNum;
	char operation;

	do
	{
		std::cout << "Enter first number: ";
		std::cin >> firstNum;

		std::cout << "Enter second number: ";
		std::cin >> secondNum;

		std::cout << "Enter operation: ";
		std::cin >> operation;

		if (std::cin.fail()) {
			std::cout << "Invalid input! Please enter correct data." << std::endl;
			
			std::cin.clear();
			
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else {
			int result = calculateValues(firstNum, secondNum, operation);
			std::cout << "Result:\t" << result << std::endl;
		}
	} while (continueCalculate());


}

