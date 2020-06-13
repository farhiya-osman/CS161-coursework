/*
THERE ARE BUGS IN THE FOLLOWING CODE.
*/
#include <iostream>

using namespace std ; 

int main(){

	int x=3;
	int y;
	char myAnswer;

	y = x;
	cout << "Please input a number: ";
	int z ; 
	cin >> z;
	bool again ;
	again = true ; 
	while(again){
		if(z > y){
			cout << "X is greater than Y\n";
			cout << "would you like to input another number?(1 for yes and 2 for no)" << endl;
				int ans; 
				cin >> ans ;
					if (ans == 1) {
						cout << "Enter value:"<< endl ;
						int b; 
						cin >> b;
					}
					else 
					{	
				     		break ;
					}
		}else{
			cout << "X is less than Y" << endl;
			break ; 
		}
		//hint: what about equal logic?
	}
	
	for(x = 0; x < 10; x++){
		cout << x << endl;

	}
	
	cout << "What number would you like to find the factorial for? " << endl;
	int num ; 
	cin >> num;
	int factorial ; 
	for( int i = num; i<= num ; ++i ){
	   	cout << "The value for i" << i << endl ; 
		factorial = i * i ; 
		cout << "The factorial is: " << factorial << endl ; 
	}		//hint: is this factorial correct?

	cout << "Are you enjoying cs161? (y or n) " << endl;
	int myanswer; 
	cin >> myanswer;
		if(myanswer = y)
		{	
		cout << "YAY" << endl;
		}else 
		{
		cout << "YOU WILL SOON!" << endl;
		}

	return 0;

}

