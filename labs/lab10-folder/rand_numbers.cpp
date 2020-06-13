#include <iostream> 
#include <ctime> /*included to allow time() to be used*/
#include <cstdlib> /*include to allow rand() and srand() to be used*/

using namespace std; 

int main() 
	{ 
		int x; //variable to hold our random integer 
		srand(time(NULL)); // seeds random number generator 
 

		x=rand();
		cout << "x = " << x << endl; 

		x= rand();
		cout << "x =" << x << endl; 
	
		return 0; 
}
