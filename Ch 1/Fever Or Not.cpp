#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double f;
	double c;
	
	//Get Temperature in Farenheit
	cout << "Enter temperature in Farenheit Scale: \t";
    cin >> f;
   
   // Show the temperature entered in Farenheit Scale
   cout << "You Entered Temperature in Farenheit is: \t " << f;
   
   // Now calculate temperature from F to Celcius
   
   c = (f - 32) / 1.8;
   
   // Print Temperature in Celcius
   cout << " \n Temperature in Celcius is :" << c << endl;
   if(f > 98.6)
   {
   	cout << "You are suffering from FEVER \n";
   }
   else
   {
   	cout << "You do not have FEVER" << endl;
   	return 0;
   }
}
