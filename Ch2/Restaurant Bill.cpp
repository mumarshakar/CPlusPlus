// Write a program that computes the tax and tip on a restaurant bill for a patron with a
// $44.50 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
// be 15 percent of the total after adding the tax. Display the meal cost, tax amount, tip
// amount, and total bill on the screen.

#include<iostream>

using namespace std;

int main()
{
	double mealCharge, tax, tip, ta, tb;
	
	//mealCharge = 44.50;
	cout << "Enter Meal Cost:"<<endl;
	cin >> mealCharge;
	
	tax = mealCharge * 0.0675;
	
	//cout << tax;
	
	// Calculation of Tipable amount 
	ta = mealCharge + tax;
	
	// Calculation of Tip
	
	tip = ta * 0.15;
	
	//cout << "Tip Will Be: " <<  tip <<endl;
	tb = mealCharge+tax+tip;
	// Showing The Results
	
	cout << "Meal Cost : $" << mealCharge<< endl;
	cout << "Tax Amount: $" << tax <<endl;
	cout << "Tip Amount: $" << tip <<endl;
	cout << "Total Bill: $" << tb << endl;
	
	return 0;
	
	
}
