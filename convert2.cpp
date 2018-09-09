#include <iostream>

using namespace std;

int Fahrenheit(int);

int main(){
	cout << "Please enter a Celsius value: ";
	int value;
	cin >> value;
	int fah = Fahrenheit(value);
	cout << value << " degrees Celsius is " << fah << " degrees Fahrenheit." << endl; 
}

int Fahrenheit(int celsius)
{
	int fahren = 1.8 * celsius + 32.0;
        return fahren;
} 
