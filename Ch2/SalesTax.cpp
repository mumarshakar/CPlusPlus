//Write a program that will compute the total sales tax on a $52 purchase. Assume the
//state sales tax is 4 percent and the county sales tax is 2 percent.

#include<iostream>
using namespace std;

int main()
{
	double purchaseAmount, stateTax, countryTax, tax;
	purchaseAmount = 52;
	
	// Calculate the state tax at rate of 4%
	stateTax = purchaseAmount * .04;
	//calculate the country tax at rate of 2%
	countryTax = purchaseAmount * 0.02;
	
	// Calculate Total Tax Amount
	
	tax =  stateTax + countryTax;
	
	// Printing Results
	
	cout << "Total Sales Tax: " << tax <<endl;
	


}
