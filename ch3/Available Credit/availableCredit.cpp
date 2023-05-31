#include<iostream>
using namespace std;

int main()
{
	double max, used, available, percentage;
	
// Ask For Customer Max Credit
	cout << "Enter Max Credits: ";
	cin >> max;
// Used Credits
	cout << "Enter Used Credits: ";
	cin >>used;
	
// calculate available credits 

	available = max-used;

// calculate percentage credits used

	percentage = (used/max)*100;
//print available credits 
	cout << "Available Credits: " << available << endl;
	
// Percentage of Credits used
	cout << "Percentage Of Credits Used: " << percentage << "%" << endl;
// Percentage Credits Remaining
	cout << "Percentage Credits Remaining: " << (100-percentage) << "%"<<endl;
	
	return 0;
	
}
