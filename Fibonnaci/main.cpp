#include <iostream>


void iterativeFibonacci(long long int number)
{
	long long int first = 1;
	long long int previous = 1;
	long long int previous2 = 0;
	long long int term = 0;
	std::cout << first << " ";
	for (long long int i = 0; i < number-1; i++)
	{
		term = previous + previous2;
		std::cout << term << " ";
		previous2 = previous;
		previous = term;
	}
	std::cout << std::endl;
}

void recursiveFibonacci(long long int& number, long long int previous, long long int previous2)
{
	number--;
	std::cout << previous2 << " ";
	if (number > 0)
	{
		long long int sum = previous + previous2;
		recursiveFibonacci(number, sum, previous);
	}
	else
	{
		std::cout << std::endl;
		return;
	}
}

int main()
{
	char cont = 'y';
	do
	{
		long long int choice;
		long long int term;
		std::cout << "Fibonnaci iteratively (1) or recursively (2)" << std::endl;
		std::cin >> choice;
		std::cout << "Which Fibonacci term to display?" << std::endl;
		std::cin >> term;
		if (choice == 1)
		{
			iterativeFibonacci(term);
		}
		else if (choice == 2)
		{
			recursiveFibonacci(term, 1, 1);
		}

		std::cout << "Run again?" << std::endl;
		std::cin >> cont;
	} while (cont == 'y' ||cont == 'Y');
}