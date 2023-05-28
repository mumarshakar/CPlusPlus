#include<iostream>
using namespace std;
int main(){
	// Initialize and get the number
	double f, c;
	
	// Get temperature in Farenheit
	cout << "Enter Temperature in Farenheit: ";
	cin >> f;
	
	c = (f-32)/1.8;
	
	cout << "Tem In Celcius is: " << c << endl;
	
	return 0;
}
