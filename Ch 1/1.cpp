#include <iostream>

using namespace std;

int main(){
		double hours, rate , pay;
	// Get the number of hours worked the employeer
	
	cout << "How many hours did your work : ";
	cin >> hours;
	
	// Get per hour rate 
	
	cout << "Your rate per hour : ";
	cin >> rate;
	
	// Now calculate the earnings
	
	int earnings = hours * rate;
	
	cout << "You have earned Rs. " <<earnings << endl ;	

}
