#include<iostream>
using namespace std;
int main()
{
	double startingBalance;
	double totalDeposits;
	double totalWithdrawls;
	double interest;
	double interestR;
	double endBalance;
	// The starting balance
	cout << "Enter starting balance: \t";
	cin >> startingBalance;
	
	// The total dollar amount of deposits made
	cout << "Enter total amount of dollars deposited: \t";
	cin >> totalDeposits;
	
	//The total dollar amount of withdrawals made
	
	cout << "Enter total withdrawls: \t";
	cin >> totalWithdrawls;
	
	// Interest Rate
	cout << "Enter Interest rate: \t ";
	cin >> interestR;
	interest = startingBalance*(interestR/100);
	
	// Calculate End Balance
	endBalance = (startingBalance + totalDeposits) - (totalWithdrawls + interest);
	
	// Print All Results 
cout << "=================================" << endl;	
	// Print Starting Balance
	cout << "Starting Balance is: \t $" << startingBalance << endl;
cout << "=================================" << endl;
	cout << "Your Total Deposits are: \t $" << totalDeposits << endl;
cout << "=================================" << endl;
	cout << "Your Total Withdrawls: \t $" << totalWithdrawls << endl;
cout << "=================================" << endl;	
	cout << "Total Interest: \t $" << interest << endl;
cout << "=================================" << endl;	
	cout << "Available Balance: \t $" << endBalance << endl;
	
	return 0;
}
