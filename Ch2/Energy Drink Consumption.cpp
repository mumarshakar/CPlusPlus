#include<iostream>
using namespace std;

int main()
{
	double tCustomers, bought14, bought64;
	
	tCustomers = 12467;
	
	bought14 = 	tCustomers * 0.14;
	
	cout << "Customers Who Bought 1 Or More Energy Drinks Per Week: " << bought14 << endl;
	
	// Calculation of customers out of 14% who bought citrus flavoured 
	
	bought64 = bought14 * 0.64;
	
	cout << "Customers Who Prefered Citrus: " << bought64 << endl;

}
