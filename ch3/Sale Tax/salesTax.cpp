#include<iostream>
using namespace std;

int main()
{
	double retailSale, amountOfSale, totalSale, salesTaxRate, salesTax;
	
	// Get Total Sale Amount
	cout << "Enter Total Sale: ";
	cin >> totalSale;
	
	// Get sales Tax Rate
	cout << "Enter Sales Tax Rate: ";
	cin >> salesTaxRate;
	
	// calculate sales tax amount
	salesTax = totalSale * salesTaxRate;

	cout <<"================================================"<<endl;

	
	// Calculate Total Amount Of Sale (Including Sales Tax) WHich Customer has to pay
	cout << "Gross Total: $"<< totalSale + salesTax << endl;
	cout << "Total Sales Amount: $" << totalSale << endl;
	cout << "Sales Tax Rate: $" << salesTaxRate << endl;
	cout << "Sales Tax Amount: $"<< salesTax <<endl;
	return 0;
	
	
}
