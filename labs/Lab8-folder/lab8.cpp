#include <iostream>
#include<string.h>

using namespace std; 

int get_Task1(){
 cout << "Please enter a sentence of paragraph: " << endl; 
 char  input[60] ;
 cin.getline(input, 60 , '\0');
   if(cin.fail())
   {
     cin.ignore(256, '\n');
     cin.clear() ; 
   }


}
int get_search() {
 int red; 
 string *answer = NULL ; 
 cout << "How many words would you want to search for: "<< endl;  
 cin >> red ;  
 cin.ignore();
 answer = new string [red];
    for(int i = 0; i < red; i++){
       cout << "Enter the words you want to read in: "<< endl;  
       getline(cin,answer[i]); 
    
    }
   cout << answer << endl;





}
int main() {
 get_search() ; 
 //get_Task1() ;



}
