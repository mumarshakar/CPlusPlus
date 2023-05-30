// Total Purchase
#include<iostream>
using namespace std;

int main()
{
	double p1, p2, p3, p4, p5, tax, total, sTotal;
	
	p1 = 12.95;
	p2 = 24.95;
	p3 = 6.95;
	p4 = 14.95;
	p5 = 3.95;
	// Calculation Of Total
	sTotal = p1+p2+p3+p4+p5;
	// Calculation Of Tax at Rate of 6%
	tax = total * 0.06;
	
	total = sTotal + tax;
	// Showing Rasults
	
	cout <<"Price Of Item 1: $"<< p1 << endl;
	cout <<"Price Of Item 2: $"<< p2 << endl;
	cout <<"Price Of Item 3: $"<< p3 << endl;
	cout <<"Price Of Item 4: $"<< p4 << endl;
	cout <<"Price Of Item 5: $"<< p5 << endl;
	
	// Show Sub Total Of Sale
	cout << "Sub Total: $" << sTotal << endl;
	cout << "Tax : $" << tax << endl;
	
	cout << "Total: $" << total << endl;
	
	
	
	return 0;
}
