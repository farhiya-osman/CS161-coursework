#include <iostream> 
#include <cstdlib>

using namespace std ; 
void swap_sentence(string &sen1 ,string &sen2) ; 

int main() {
	string sentence1 , sentence2 ; 

	cout << "Enter Sentence 1: " << endl ; 
	getline (cin,sentence1) ; 
	cout << "Enter Sentence 2: " << endl ; 
	getline(cin,sentence2) ; 

	swap_sentence(sentence1,sentence2) ; 

	cout<< "In main function " << endl ; 
	cout << "sentence1: " << sentence1 << endl ; 
	cout << "sentence2: " << sentence2 << endl ; 

	return 0 ;


}
void swap_sentence (string &sen1 , string &sen2) {
	cout << "In swap function " << endl ; 
	string c = sen1 ;
	sen1 = sen2 ;
	sen2 = c ;
	cout << "Sen1: " << sen1 << endl ; 
	cout << "Sen2: " << sen2 << endl ; 


}
