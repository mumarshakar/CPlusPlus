#include<iostream>
using namespace std;

int main()
{
	// One acre of land is equivalent to 43,560 square feet. Write a program that calculates
	//the number of acres in a tract of land with 389,767 square feet.
	
	double squareFeetInOneAcre, noOfSquareFeet, acres;
	
	// No of SQFT in One Acre 
	squareFeetInOneAcre = 43560;
	
	noOfSquareFeet = 389767;
	
	acres = 	noOfSquareFeet / squareFeetInOneAcre;
	
	cout << "No Of Acres: " << acres << endl;	
	
}
