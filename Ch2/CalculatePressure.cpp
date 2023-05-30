#include<iostream>

using namespace std;

int main()
{
	double f, a, p;
	
	// Get Force 
	f = 172.5;
	
	// Get area
	
	a = 27.5;
	
	// Calculate Pressure By Dividing Force By Area
	
	p = f/a;
	
	// Print The Contents of Pressure 
	
	cout << "Pressure is:" << p << " (Force Per Unit Area)" << endl;
	
	return 0;
}
