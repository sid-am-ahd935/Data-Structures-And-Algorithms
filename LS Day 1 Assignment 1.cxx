#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int a = 1;
	int b = 1;
	
	int n;
	cout << "Enter Size Of Loop:";
	cin >> n;
	cout << endl;
	
	while(b <= n)
	{
	    a += 1; //a++
	    b += a; //b = b + a
	    cout << ("Hi LetsUpgraders") << endl;
	}
	
	/*
	At each iteration the 'a' increments by 1
	And 'b' increments by value of 'a'
	
	Case 1:
	1) a = 2; b = 3; Message Printed;
	2) a = 3; b = 6; Message Printed;
	3) a = 4; b = 10; Message Printed;
	
	Basically It Is Following A Series
	Where The Difference Constatntly Increases
	With Each Iteration
	
	Series: 
	3,6,10,15,21,28,36,45,55,66,78, etc.
	
	Hence The Series Is Sum Of N Natural Numbers
	And This Series Is Also Known As 
	Triangular Number Series
	
	The Loop Runs Until a(a+1)/2 <= n
	'a' Being The No. Of Times Loop Runs
	
	Removing Constants, a * a <= n
	Hence, a = sqrt(n)
	
	And Hence The Time Complexity Of This Case
	is O(n) = O(sqrt(N))
	*/
	return 0;
}