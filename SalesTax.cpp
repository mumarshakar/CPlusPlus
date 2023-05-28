#include <iostream>
using namespace std;

int main(){
	 double price, taxRate, tax, total;
	 // Get the price of the item
	cout << "Enter the price of Item: ";
	cin >> price;
	
	// Get the sales tax rate 
	cout << "Enter the sales tax rate : ";
	cin >> taxRate;
	
	tax = (taxRate*price)/100;
	
	//Calculate the sales tax amount
	total = price + tax;
	
	cout << tax << endl;
	// Showing the results
	
	cout << "The sales tax for the purchase: " << tax << endl;
	cout << "The total of the sale: " << total;
	
}
