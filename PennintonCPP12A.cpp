//Micah Pennington
//January 24 2022 ©
//Chapter 3 Program

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	/* -- Define variables to use -- */

	//Constant variable to hold the pice of a package
	const double PACKAGE_PRICE = 99.0;
	//Variable to hold the number of packages that the user wishes to buy
	int numOfPackages;
	//Variable to hold the total price of the packages
	double total;
	//Variable to hold the ammount taken off the total price as a discount
	double discount;

	/* -- input -- */

	//Display the discount ammounts
	cout << "Discounts:\n"
		<< "Quantity\tDiscount\n"
		<< "10 - 19\t\t20 %\n"
		<< "20 - 49\t\t30 %\n"
		<< "50 - 99\t\t40 %\n"
		<< "100 or more\t50 %\n\n";

	//Ask the user for input
	cout << "Please enter the number of packages you wish to purchase: ";

	//Get the user's input and set it to numOfPackages
	cin >> numOfPackages;
	cout << '\n';


	//Validate the user's input, if it's bad, exit the program
	if (!numOfPackages > 0) { return EXIT_FAILURE; }

	/* -- Output -- */

	//find the correct discount ammount
	if (numOfPackages < 10) {
		//Set the dicount price
		discount = (numOfPackages * PACKAGE_PRICE) * 0.0;
		//Set the total price
		total = (numOfPackages * PACKAGE_PRICE) * 1.0;

		//Display the data with formatting for US currency
		cout << "Discount percent: 0%\n"
			<< "Discount ammount: $" << setprecision(2) << fixed << discount << '\n'
			<< "Total: $" << setprecision(2) << fixed << total;

		//Exit the program
		return EXIT_SUCCESS;
	}
	if (numOfPackages < 20) {
		//Set the dicount price
		discount = (numOfPackages * PACKAGE_PRICE) * 0.2;
		//Set the total price
		total = (numOfPackages * PACKAGE_PRICE) * 0.8;

		//Display the data with formatting for US currency
		cout << "Discount percent: 20%\n"
			<< "Discount ammount: $" << setprecision(2) << fixed << discount << '\n'
			<< "Total: $" << setprecision(2) << fixed << total;

		//Exit the program
		return EXIT_SUCCESS;
	}
	if (numOfPackages < 50) {
		//Set the dicount price
		discount = (numOfPackages * PACKAGE_PRICE) * 0.3;
		//Set the total price
		total = (numOfPackages * PACKAGE_PRICE) * 0.7;

		//Display the data with formatting for US currency
		cout << "Discount percent: 30%\n"
			<< "Discount ammount: $" << setprecision(2) << fixed << discount << '\n'
			<< "Total: $" << setprecision(2) << fixed << total;

		//Exit the program
		return EXIT_SUCCESS;
	}
	if (numOfPackages < 100) {
		//Set the dicount price
		discount = (numOfPackages * PACKAGE_PRICE) * 0.4;
		//Set the total price
		total = (numOfPackages * PACKAGE_PRICE) * 0.6;

		//Display the data with formatting for US currency
		cout << "Discount percent: 40%\n"
			<< "Discount ammount: $" << setprecision(2) << fixed << discount << '\n'
			<< "Total: $" << setprecision(2) << fixed << total;

		//Exit the program
		return EXIT_SUCCESS;
	}
	if (numOfPackages >= 100) {
		//Set the dicount price
		discount = (numOfPackages * PACKAGE_PRICE) * 0.5;
		//Set the total price
		total = (numOfPackages * PACKAGE_PRICE) * 0.5;

		//Display the data with formatting for US currency
		cout << "Discount percent: 50%\n"
			<< "Discount ammount: $" << setprecision(2) << fixed << discount << '\n'
			<< "Total: $" << setprecision(2) << fixed << total;

		//Exit the program
		return EXIT_SUCCESS;
	}

	//Something went wrong
	return EXIT_FAILURE;
}