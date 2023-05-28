#include<iostream>
using namespace std;

int main(){
	int age;
	// Ask For Age
	
	cout << "Enter age: ";
	cin >> age;
	
	if(age > 18)
	{
		cout << "You can vote \n";
	}
	else
	{
		cout << "You can not Vote"<< endl;
		
	}
	return 0;
}
