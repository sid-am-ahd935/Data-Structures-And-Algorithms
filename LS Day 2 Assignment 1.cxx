#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int size,k = 0;
	
	cout << "Enter The Size Of The Triangle:";
	cin >> size;
	
	for (int i=0; i<=size; i++) 
	{
		for (int j=0; j<i; j++) 
		{
			if ((i+j) % 2 != 0)
			cout << "1 ";
			
			else
			cout << "0 ";
			
			k++;
		}
		cout << endl;
	}
	
	return 0;
}