#include<iostream>
using namespace std;

int main()
{
	int gallons = 20;
	
	// Calculation In Town 
	
	double milesInTown = 21.5;  // 21.5 miles per gallon in town
	
	double distanceInTown = gallons * milesInTown;
	
	cout << "No Of miles In Town Per Tank:" << distanceInTown << endl;
	
	// Calculation in Highway
	
	double milesInHWPerGallon = 26.8;
	
	double distanceInHW = gallons * milesInHWPerGallon;
	
	cout << "No of miles In Highway Per Tank: " << distanceInHW <<endl;
	
}
