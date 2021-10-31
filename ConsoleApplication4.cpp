//Name: Chinmoy Tarafder
//Class: ITCS 2530
//Date:10/31/2021
#include <iostream>  
#include <iomanip>  
#include <locale>  
using namespace std;

int main()
{
	//Showing Description
	cout << "*******************************************************************"
		"\n***** program for calculating cost,profit and needed container ****"
		"\n*******************************************************************";

	
	//Declaring variables
	int container;
	double cheese,profit,cost;
	//Asking for the weight of Cheese
	cout << "\n\n Please enter the total number of kilograms of cheese produced: ";
	// Collect the value
	cin >> cheese;
	
	//Calculating the number of containers
	container = cheese/2.75;
	//Calculating the cost
	cost = container * 4.12;
	//Calculating the profit
	profit = container * 1.45;
	//Showing output text for the number of containers
	cout << "The number of containers to hold the cheese is: " 
	//Showing the number of needed containers with a width of 32 and the numbers aligned to the right 
		<< right<< setw(31) << container << '\n';
	//Showing output text for the cost of the containers of cheese
	cout << "The cost of producing "<<container<<" container(s) of cheese is:$"
	//Showing the cost with a width of 26 and the number aligned to the right	
		<< right<< setw(26) << cost << '\n';
	//Showing output text for the profit of the containers of cheese
	cout << "The profit from producing "<<container<<" container(s) of cheese is:$" 
	//Showing the profit with a width of 22 and the number aligned to the right
		<< right<< setw(22) << profit << '\n';
		
	return 0;
}
