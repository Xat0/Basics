#include <iostream>
#include <cmath>

using namespace std;

int main() {

	// Variables
	double a, b, c, root1, root2;

	// User input
	std::cout << "Enter a: \n:";
	std::cin >> a;

	std::cout << "Enter b: \n:";
	std::cin >> b;

	std::cout << "Enter c: \n:";
	std::cin >> c;

	// Formula and calculation
	root1 = -b + sqrt(b * b - 4 * a * c) / 2 * a;
	root2 = -b - sqrt(b * b - 4 * a * c) / 2 * a;

	// Printing the output
	std::cout << "Root 1 is " << root1 << endl;
	std::cout << "Root 2 is " << root2 << endl;

	return 0;
}