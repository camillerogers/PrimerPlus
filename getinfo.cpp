// getinfo.cpp -- intput and output

#include <iostream>

int main()
{
	using namespace std;
	
	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more. ";
	carrots = carrots + 2;
	
	//the next line concatenates the output
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}
