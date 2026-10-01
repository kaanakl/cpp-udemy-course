#include <iostream>

int main() {
	std::cout << "Enter an amount in cents: ";
	int cents{};
	std::cin >> cents;

	const int dollar{ 100 };
	const int quarter{ 25 };
	const int dime{ 10 };
	const int nickel{ 5 };
	const int penny{ 1 };

	int remainingChange{};
	

	std::cout << "\nYou can provide change as follows: " << '\n';
	std::cout << "Dollars: " << (cents / dollar) << '\n';

	remainingChange = cents % dollar;
	std::cout << "Quarters: " << (remainingChange / quarter) << '\n';

	remainingChange %= quarter;
	std::cout << "Dimes: " << (remainingChange / dime) << '\n';

	remainingChange %= dime;
	std::cout << "Nickels: " << (remainingChange / nickel) << '\n';

	remainingChange %= nickel;
	std::cout << "Pennies: " << (remainingChange / penny) << '\n';

	return 0;
}