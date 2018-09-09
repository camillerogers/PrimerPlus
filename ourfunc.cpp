// ourfunc.cpp -- defining your own function
#include <iostream>

using namespace std;
void simon(int);

int main()
{
	//using namespace std;
	simon(3);		//call the simon() function
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);		//call simon() again
	cout <<  "Done!" << endl;
	return 0;
}

void simon(int n) 		//define the simon() function
{
	//using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
	//void functions don't need return statments 
}
