#include <iostream>
#include <vector>

int main() {

	std::vector <int> vector1{};
	std::vector <int> vector2{};

	vector1.push_back(10);
	vector1.push_back(20);

	std::cout << "Size of vector1: " << vector1.size() << '\n';
	std::cout << "1st elemnt in vector1: " << vector1.at(0)
		<< '\n' << "2nd element in vector1: " << vector1.at(1) << '\n';

	vector2.push_back(100);
	vector2.push_back(200);

	std::cout << "\nSize of vector2: " << vector2.size() << '\n';
	std::cout << "1st element in vector2: " << vector2.at(0)
		<< '\n' << "2nd element in vector2: " << vector2.at(1) << '\n';

	std::vector <std::vector<int>> vector2D{};
	vector2D.push_back(vector1);
	vector2D.push_back(vector2);

	std::cout << "\nvector2D" << "\n{" << vector2D.at(0).at(0) << ", " << vector2D.at(0).at(1)
		<<"}\n" << "{" << vector2D.at(1).at(0) << ", " << vector2D.at(1).at(1)
		<<"}" << '\n';

	vector1.at(0) = 1000;

	std::cout << "\nvector2D" << "\n{" << vector2D.at(0).at(0) << ", " << vector2D.at(0).at(1)
		<< "}\n" << "{" << vector2D.at(1).at(0) << ", " << vector2D.at(1).at(1)
		<< "}" << '\n';

	std::cout << "\nVector1: " << vector1.at(0) << " " << vector1.at(1) << '\n';

	return 0;
}
