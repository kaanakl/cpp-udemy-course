#include <iostream>

int main() {
	std::cout << "Kaan's Carpet Cleaning Service" << '\n';

	int smallRoomPrice{ 25 };
	int largeRoomPrice{ 35 };
	const double salesTax{ 0.06 };

	std::cout << "\nHow many small rooms would you like to get cleaned? ";
	int smallRoom{};
	std::cin >> smallRoom;

	std::cout << "How many large rooms would you like to get cleaned? ";
	int largeRoom{};
	std::cin >> largeRoom;

	std::cout << "\nEstimate for carpet cleaning service" << '\n';
	std::cout << "Number of small rooms: " << smallRoom << '\n';
	std::cout << "Number of large rooms: " << largeRoom << '\n';
	std::cout << "Price per small room: $" << smallRoomPrice << '\n';
	std::cout << "Price per large room: $" << largeRoomPrice << '\n';

	int cost{ (smallRoomPrice * smallRoom) + (largeRoomPrice * largeRoom) };
	std::cout << "Cost: $" << cost << '\n';

	//calculates the final tax
	double tax{ cost * salesTax };
	std::cout << "Tax: $" << tax << '\n';

	std::cout << "===========================" << '\n';

	double finalPrice{ cost + tax };
	std::cout << "Total estimate: $" << finalPrice << '\n';
	std::cout << "This estimate is valid for 30 days" << '\n';

	return 0;
}
