#include<iostream>
using namespace std;

int main()
{
	cout << " This Programm displays \n";
	cout << "The amount paid for the stock alone (without the commission) \n";
	cout << "The amount of the commission"<<endl;
	cout << "The total amount paid (for the stock plus the commission)" << endl;
	
	double numberOfShares, pricePerShare, commissionRate, withOutStock , total, commission;
	
	numberOfShares = 600;
	pricePerShare = 21.77;
	
	commissionRate = 2;      // 2% Commission 
	
	// The amount paid for the stock alone 
	withOutStock = numberOfShares * pricePerShare;
	// Commission Amount 
	 commission = withOutStock * 0.02;
	// Total AMount To be paid
	total = commission + withOutStock;
	cout << "Without Stock: $"<< withOutStock << endl; 
	cout << "Commission: $" << commission << endl;
	cout << "Total: $" << total << endl;
}
