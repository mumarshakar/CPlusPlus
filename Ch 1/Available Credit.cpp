#include <iostream>

using namespace std;

int main(){
	double max, used, available;
	// Get credits from customer
	cout << "Enter the Max Credit: ";
	cin >> max;
	
	// Enter amount of the credits used by the customer
	
	cout << "Enter the amount of credit used by the customer: ";
	cin >> used;
	
	available =  max - used;
	
	cout << "Your available Credits are : " << available << endl;
}
