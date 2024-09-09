#include <iostream>

int main() {
	//init variables
	const double taxReturn = 95000;
	const double estate = 0.4;
	const double county = 0.2;


	std::cout << "Gross Income: " << taxReturn << std::endl;
	std::cout << "Estate Tax: " << estate << "%" << std::endl;
	std::cout << "County State Tax: " << county << "%" << std::endl;
	//calculate the income while printing
	std::cout << "Total Income: " << taxReturn * (estate + county) << std::endl;
	return 0;
}