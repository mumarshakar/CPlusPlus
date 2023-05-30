// Calculate Pay Amount Yearly

#include<iostream>
using namespace std;
int main()
{
	double payAmount, payPeriods, annualPay;
	// What is Pay For One Pay Period
	payAmount = 1700;
	// No of Pay Periods in Year
	payPeriods = 26;
	// Calculation Of Annual Pay
	annualPay =  payAmount * payPeriods;
	
	// Showing Results
	cout << "Annual Pay: $" << annualPay << endl;
	
	return 0;
}

