#include <iostream>

int main()
{
	using namespace std;
	string address;
	cout << "What is your address? ";
	cin >> address;
	cout << "what is your name? ";
	string name;
	cin >> name;
	cout << "Your name is " << name 
		<< ", and your address is " << address;;
	return 0;
}
