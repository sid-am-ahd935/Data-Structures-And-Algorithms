#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int size;
	
	cout << "Enter Size Of Pattern:";
	cin >> size;
	cout << endl;
	
	for (int i = 0; i <= size; i ++)
	{
		for (int j = 0; j <= i; j++)
		cout << " ";
		
		for (int j = 0; j <= size; j++)
		cout << "*";
		
		cout << endl;
	}
	
	
	
}