/******************************************************************* 
 * ** Program: assignment4.cpp
 * ** Author: Farhiya Osman 
 * ** Date: 03/01/2020
 * ** Description: The user is asked to input a sentance and pick one of five operations. Their choices include palindrome detector,letter swap,reverse string,word frequency, and vowels and consonants counters
 * ** Input: sentance/paragraph
 * **Output: if vowels = consonants,if its a palindrome,letters swapped, word counter and reversed string
 * *******************************************************************/

#include <iostream> 
#include <string> 
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std ;

/*******************************************************************
 *  ** Function: get_vowelsandConstants
 * ** Description: Determines if the number of vowels equals the numeber of consonants
 * ** Parameters: char* sentance
 * ** Pre-conditions: sentance character entered by the user 
 * ** Post-conditions: if the numebr of consonants equals the numeber of vowels
 * *******************************************************************/
int get_vowelsandConstants(char* sentance ){

//setting to zero to make sure they start at the same value each time  
int vowelcount = 0 ; 
int vcount = 0 ; 
int ccount = 0;
int nonlet = 0; 

for (int i = 0; i < sentance[i] != '\0' ; ++i)
{  
   //Taking in account the vowels,consonants and special characters
   if(sentance[i] == 'a' || sentance[i] == 'i' || sentance[i] == 'e' || sentance[i] == 'o'){
      vcount++ ;
   } 
   else if(sentance[i] >= 'a' && sentance[i]<= 'z' || sentance[i]>= 'A' && sentance[i] <= 'Z'){
      ccount ++ ;
   }
   else { 
      nonlet ++;
   }
   
}
//Based on counter variables determines which statement is printed to the terminal 
if(vcount != ccount ){
  cout << "The number of vowels does not equal the number of constants: "<< endl ; 
}
else if (nonlet >= 1)
{
  cout << "No vowels or consontants are present: " << endl; 
}
else
{
  cout << "The number of vowels do equal the number of consonants: " << endl; 
}
}
 /*******************************************************************
  * ** Function: get_palindrome
  * ** Description: Determines if the string inputted is a palindrome or not 
  * ** Parameters: char* sentance
  * ** Pre-conditions:taking the sentance parameter 
  * ** Post-conditions: if the sentance is parameter or not 
  * *******************************************************************/
int get_palindrome(char* sentance){
 int red = strlen(sentance) ;
 for(int z = 0; z<red; z++){
   if(sentance[z]>= 65 && sentance[z]<=90){
     sentance[z] = sentance[z] + 32;
   }else
   {
     continue;
   }
    if(sentance[z] != sentance[red-z-1]){
       cout<< "This is not a palindrome  "<< endl ; 
       break ; 
    }
    else 
    {
      cout << "This is a palindrome " << endl;
      break ;  
    }    
}
}
 /*******************************************************************
  * ** Function: letter_Swap
  * ** Description: swap two letters in the function 
  * ** Parameters: char* sentance
  * ** Pre-conditions: the sentance parameter 
  * ** Post-conditions: a new sentance with swapped characters entered by the user 
  * *******************************************************************/
int letter_Swap(char* sentance) {

  cout << "Enter the  character you would like to swap from the original sentance: " << endl; 
  char yellow; 
  cin >> yellow;
  cout << "Enter the letter you would like to replace with: " << endl; 
  char orange; 
  cin >> orange;
  int blue; 
  blue = strlen(sentance);
    for( int i = 0; i< blue ; i++)
    {
       if ( sentance[i] == yellow){
	       sentance[i] = orange;
	    }
    }
  cout << sentance << endl; 
}
 /******************************************************************* 
  * ** Function: Find 
  * ** Description: This function finds how many times the word is printed in the sentance
  * ** Parameters: char* sentance and string arr
  * ** Pre-conditions: the sentance and arr parameter 
  * ** Post-conditions: the number of times the word is present in the sentance
  * *******************************************************************/
int find(char* sentance,string arr){
int counterval = 0; 
int actualcounter = 0;
for(int i = 0; i< strlen(sentance); i++){
  if(arr[0] == sentance[i]){
    for(int k = 0; k< arr.size(); k++){
     if(arr[k] == sentance[i+k]){
       counterval ++;
     }
    
    }
  
  }
  if(counterval == arr.size()){
  actualcounter ++;
  }
  counterval = 0;
}
 
 return actualcounter; 
}
 /******************************************************************* 
  * ** Function: get_wordfrequency
  * ** Description:outputs to the user the number of times a word is present in a sentance  
  * ** Parameters: char* sentance
  * ** Pre-conditions:the sentance parameter 
  * ** Post-conditions: the word and how many times its present in the string
  * *******************************************************************/
int get_wordfrequency(char* sentance){
  int wsearch; 
  cout << "How many words do you want to search for: "<< endl;  
  cin >> wsearch;
  cin.ignore(); 
  string *arr = new string[wsearch]; 
  for(int i = 0; i<(wsearch); i++){
      cout<< "Enter the words you want to search for: "<< endl; 
      getline(cin,arr[i]); 
  }
  for (int p = 0; p < wsearch; p++){
    int purple = find(sentance,arr[p]); 
    cout<< arr[p]<< ";" << purple << endl; 
  
  }
  delete [] arr ; 
 
}

 /******************************************************************* 
  * ** Function: reverse string
  * ** Description: reverse the string inputted by the user 
  * ** Parameters: char* sentance
  * ** Pre-conditions:the sentance parameter 
  * ** Post-conditions: a new string that is reversed of the old one
  * *******************************************************************/
int reverse_string(char* sentance){
   char*  arr = new char[strlen(sentance)+1]; 
   int purple = strlen(sentance);
     for(int i = 0; i < (purple); i++)
     {  
       arr[i] =  sentance[purple-i-1] ; 
     } 
   arr[purple] = '\0'; 
   cout << arr << endl;
}
 /******************************************************************* 
  * ** Function: int_main
  * ** Description: its where you call all your function to display on the terminal 
  * ** Parameters: none
  * ** Pre-conditions:none
  * ** Post-conditions: the sentance modification will be printed on the terminal
  * *******************************************************************/
int main() {
int green;    
 do // loop to run untill the user chooses they dont want any more opertations 
{
  cout << "Enter a sentence or paragraph: " << endl ; 
  char sentance[1024]; // 
  cin.getline(sentance, 1024, '\n');
  cout << "Would you like to count the vowels and constants(1), Letter swap(2), reverse the string(3),palindrome detector(4), and words frequency(5)" << endl;  
  int userschoice; 
  cin >> userschoice;
  cin.ignore() ; 
  // all the users options for changes to the original sentance  
    if(userschoice == 1 ){
       get_vowelsandConstants(sentance); 
    } 
    else if (userschoice == 2){ 
       letter_Swap(sentance);
    }
    else if(userschoice == 3){
       reverse_string(sentance);
    }
    else if(userschoice == 4){
        get_palindrome(sentance); 
    }
    else 
    { 
      get_wordfrequency(sentance); 
    }  
   cout << "Do you want another operation to be performed? (0-No and 1- Yes)" << endl;
   cin>> green;
   cin.ignore(); 
}
while ( green == 1);
}
