#include <iostream> 
#include <cmath> 

using namespace std; 

int main() 
	
{
 	int x; 
	cout << "Enter the number of bits: " ;

	 	
 
	cin >> x ;  
	int num = pow(2,x) ; 
	cout << "(2^x)-1 is the maximum unsigned Binary: " << (int)pow(2,x)-1 << endl;
	cout << "(2^(x-1))-1 is the maximum signed Binary: " << (int)pow(2,(x-1))- 1 << endl; 
	cout << "(-2^(x-1)) is the minimum value for a signed Binary: " << (int)pow(-2,(x-1)) << endl;  
	return 0 ;
 

 
} 

