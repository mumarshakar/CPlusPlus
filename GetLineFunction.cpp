#include <iostream>
using namespace std;
int main() {
    string line;
    cout << "Enter a line of text: ";
    getline(cin, line); // Read a line of text from std::cin
    cout << "You entered: " << line << endl;
    return 0;
}

